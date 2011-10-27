#ifndef MY_DIALOG_H
#define MY_DIALOG_H

#include <QMainWindow>

namespace Ui {
    class my_dialog;
}

class my_dialog : public QMainWindow {
    Q_OBJECT
public:
    my_dialog(QWidget *parent = 0);
    ~my_dialog();

private slots:
    void enter();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::my_dialog *ui;
    QString buf;
};

#endif // MY_DIALOG_H
