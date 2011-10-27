/********************************************************************************
** Form generated from reading UI file 'class.ui'
**
** Created: Sun Oct 23 20:05:44 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_H
#define UI_CLASS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_class
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *class)
    {
        if (class->objectName().isEmpty())
            class->setObjectName(QString::fromUtf8("class"));
        class->resize(400, 300);
        pushButton = new QPushButton(class);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 240, 93, 27));
        lineEdit = new QLineEdit(class);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 240, 113, 27));
        textBrowser = new QTextBrowser(class);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 20, 256, 192));

        retranslateUi(class);

        QMetaObject::connectSlotsByName(class);
    } // setupUi

    void retranslateUi(QWidget *class)
    {
        class->setWindowTitle(QApplication::translate("class", "class", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("class", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_H
