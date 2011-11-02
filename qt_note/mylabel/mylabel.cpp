#include "mylabel.h"
#include "ui_mylabel.h"

mylabel::mylabel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mylabel)
{
    ui->setupUi(this);
}

mylabel::~mylabel()
{
    delete ui;
}
