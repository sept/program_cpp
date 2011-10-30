#include "test_qt.h"
#include "ui_test_qt.h"

test_qt::test_qt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::test_qt)
{
    ui->setupUi(this);
}

test_qt::~test_qt()
{
    delete ui;
}

void test_qt::changeEvent(QEvent *e)
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
