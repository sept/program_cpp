#ifndef CLASS_H
#define CLASS_H

#include <QWidget>

namespace Ui {
    class class;
}

class class : public QWidget
{
    Q_OBJECT

public:
    explicit class(QWidget *parent = 0);
    ~class();

private:
    Ui::class *ui;
};

#endif // CLASS_H
