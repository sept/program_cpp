#ifndef TEST_QT_H
#define TEST_QT_H

#include <QMainWindow>

namespace Ui {
    class test_qt;
}

class test_qt : public QMainWindow {
    Q_OBJECT
public:
    test_qt(QWidget *parent = 0);
    ~test_qt();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::test_qt *ui;
};

#endif // TEST_QT_H
