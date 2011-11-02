/********************************************************************************
** Form generated from reading UI file 'mylabel.ui'
**
** Created: Wed Nov 2 20:59:26 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLABEL_H
#define UI_MYLABEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mylabel
{
public:
    QLabel *label;

    void setupUi(QWidget *mylabel)
    {
        if (mylabel->objectName().isEmpty())
            mylabel->setObjectName(QString::fromUtf8("mylabel"));
        mylabel->resize(421, 355);
        label = new QLabel(mylabel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 191, 231));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../broad/htdocs/background.gif")));
        label->setScaledContents(true);

        retranslateUi(mylabel);

        QMetaObject::connectSlotsByName(mylabel);
    } // setupUi

    void retranslateUi(QWidget *mylabel)
    {
        mylabel->setWindowTitle(QApplication::translate("mylabel", "mylabel", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mylabel: public Ui_mylabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLABEL_H
