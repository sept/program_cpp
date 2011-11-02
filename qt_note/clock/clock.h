#ifndef CLOCK_H
#define CLOCK_H

#include <QWidget>

namespace Ui {
    class clock;
}

class clock : public QWidget {
    Q_OBJECT
public:
    clock(QWidget *parent = 0);
    ~clock();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::clock *ui;
};

#endif // CLOCK_H
