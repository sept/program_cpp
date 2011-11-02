#ifndef MYLABEL_H
#define MYLABEL_H

#include <QWidget>

namespace Ui {
    class mylabel;
}

class mylabel : public QWidget
{
    Q_OBJECT

public:
    explicit mylabel(QWidget *parent = 0);
    ~mylabel();

private:
    Ui::mylabel *ui;
};

#endif // MYLABEL_H
