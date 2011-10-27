#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "ui_dialog.h"

namespace Ui {
    class dialog;
}

class dialog : public QDialog, public Ui_dialog
{
    Q_OBJECT
public:
    dialog(QWidget *parent = 0);
    ~dialog();

private slots:
        void enter();

//protected:
  //  void changeEvent(QEvent *e);

private:
   // Ui::dialog *ui;
    QString buf;
};

#endif // DIALOG_H
