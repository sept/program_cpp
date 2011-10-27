#include "my_dialog.h"
#include "ui_my_dialog.h"

my_dialog::my_dialog(QWidget *parent) : QMainWindow(parent),ui(new Ui::my_dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(enter()));
}

my_dialog::~my_dialog()
{
    delete ui;
}

void my_dialog::enter()
{
    buf += ui->lineEdit->text() + '\n';
    ui->lineEdit->clear();

    ui->textBrowser->setText(buf);
    ui->textBrowser->moveCursor(QTextCursor::End);
}

void my_dialog::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
