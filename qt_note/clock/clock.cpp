#include "clock.h"
#include "ui_clock.h"

clock::clock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clock)
{
    ui->setupUi(this);
}

clock::~clock()
{
    delete ui;
}

void clock::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
