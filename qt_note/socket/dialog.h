#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>
#include <QTcpSocket>

namespace Ui {
    class dialog;
}

class dialog : public QDialog {
    Q_OBJECT
public:
    dialog(QWidget *parent = 0);
    ~dialog();

protected:
    void changeEvent(QEvent *e);
private slots:
    void sendMsg();
    void recvMsg();
    void error();

private:
    Ui::dialog *ui;
    QTcpSocket *tcpSocket;
    QString msgBuffer;

};

#endif // DIALOG_H
