#include "dialog.h"
#include "ui_dialog.h"
#include <QHostAddress>
#include <QMessageBox>
#include <QTextStream>
#include <QString>
#include <iostream>
using namespace std;

dialog::dialog(QWidget *parent)
    :QDialog(parent), ui(new (Ui::dialog))
{
    ui->setupUi(this);
    tcpSocket = new QTcpSocket(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(sendMsg()));
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(recvMsg()));
    connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(error()));

    tcpSocket->connectToHost(QHostAddress::LocalHost, 8000);
}

dialog::~dialog()
{
    delete ui;
}

void dialog::sendMsg()
{
    QTextStream out(tcpSocket);
    out<<ui->lineEdit->text()<<endl;
  //  QString buf;
    msgBuffer += "guoguo :\n" + ui->lineEdit->text() + '\n';
    ui->lineEdit->clear();
    ui->textBrowser->setText(msgBuffer);
}

void dialog::error()
{
    QMessageBox::critical(this, "socket error", tcpSocket->errorString());
    tcpSocket->close();
}

void dialog::recvMsg()
{
    if (!tcpSocket->canReadLine())
        return;

    QString responseLine;
    do
    {
            responseLine += tcpSocket->readLine();
    }
    while(tcpSocket->canReadLine());
    {
	msgBuffer += "other say: \n" + responseLine;

        ui->textBrowser->setText(msgBuffer);
     //   ui->textBrowser->moveCursor(QTextCursor::End);
    }
}


void dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
