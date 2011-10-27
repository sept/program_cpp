#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
:QMainWindow(parent)//\
  , ui(new Ui::MainWindow)
{
    setupUi(this);
    QObject::connect(pushButton, SIGNAL(clicked()), this, SLOT(enter()));
}

MainWindow::~MainWindow()
{
    //delete ui;
}

/*****************************************************************
Function   :           enter
Describtion:           show the comments of lineEdit in textBrowser
******************************************************************/
void MainWindow::enter()
{
    buf = buf + lineEdit->text() + '\n';
    lineEdit->clear();

    textBrowser->show(buf);
}
