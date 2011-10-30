#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>

namespace Ui {
    class dialog;
}

class dialog : public QWidget {
    Q_OBJECT
public:
    dialog(QWidget *parent = 0);
    ~dialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::dialog *ui;
};

#endif // DIALOG_H
