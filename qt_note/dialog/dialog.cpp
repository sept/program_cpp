#include "dialog.h"
#include "ui_dialog.h"

dialog::dialog(QWidget *parent):QDialog(parent)//,ui(new Ui::dialog)
{
    setupUi(this);
    connect(pushButton, SIGNAL(clicked()), this, SLOT(enter()));
    //ui->setupUi(this);
}

dialog::~dialog()
{
    //delete ui;
}

void dialog::enter()
{
    buf += lineEdit->text + '\n';
    lineEdit->clear();

    textBrowser->setText();
    textBrowser->moveCursor(QTextCursor::End);
}
/*
void dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type())
    {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
*/
