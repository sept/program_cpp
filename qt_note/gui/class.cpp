#include "class.h"
#include "ui_class.h"

class::class(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::class)
{
    ui->setupUi(this);
}

class::~class()
{
    delete ui;
}
