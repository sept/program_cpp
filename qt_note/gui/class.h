#ifndef CLASS_H
#define CLASS_H

#include <QWidget>

namespace Ui {
    class dialog;
}

class dialog : public QWidget
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = 0);
    ~dialog();

private:
    Ui::dialog *ui;
};

#endif // CLASS_H
