/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Sun Oct 23 19:48:42 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_dialog
{
public:
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName(QString::fromUtf8("dialog"));
        dialog->resize(406, 259);
        lineEdit = new QLineEdit(dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 210, 221, 27));
        textBrowser = new QTextBrowser(dialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(9, 9, 251, 181));
        label = new QLabel(dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 40, 51, 17));
        pushButton = new QPushButton(dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 210, 93, 27));

        retranslateUi(dialog);

        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QDialog *dialog)
    {
        dialog->setWindowTitle(QApplication::translate("dialog", "dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialog", "guoguo", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("dialog", "Enter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
