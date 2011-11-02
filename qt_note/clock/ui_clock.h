/********************************************************************************
** Form generated from reading UI file 'clock.ui'
**
** Created: Wed Nov 2 19:09:04 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clock
{
public:

    void setupUi(QWidget *clock)
    {
        if (clock->objectName().isEmpty())
            clock->setObjectName(QString::fromUtf8("clock"));
        clock->resize(600, 400);

        retranslateUi(clock);

        QMetaObject::connectSlotsByName(clock);
    } // setupUi

    void retranslateUi(QWidget *clock)
    {
        clock->setWindowTitle(QApplication::translate("clock", "clock", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class clock: public Ui_clock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
