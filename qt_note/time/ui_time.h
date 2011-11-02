/********************************************************************************
** Form generated from reading UI file 'time.ui'
**
** Created: Wed Nov 2 19:15:07 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIME_H
#define UI_TIME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_time
{
public:

    void setupUi(QWidget *time)
    {
        if (time->objectName().isEmpty())
            time->setObjectName(QString::fromUtf8("time"));
        time->resize(600, 400);

        retranslateUi(time);

        QMetaObject::connectSlotsByName(time);
    } // setupUi

    void retranslateUi(QWidget *time)
    {
        time->setWindowTitle(QApplication::translate("time", "time", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class time: public Ui_time {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME_H
