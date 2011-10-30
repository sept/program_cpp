/********************************************************************************
** Form generated from reading UI file 'my_dialog.ui'
**
** Created: Sat Oct 29 15:01:33 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MY_DIALOG_H
#define UI_MY_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_my_dialog
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *my_dialog)
    {
        if (my_dialog->objectName().isEmpty())
            my_dialog->setObjectName(QString::fromUtf8("my_dialog"));
        my_dialog->resize(376, 265);
        centralWidget = new QWidget(my_dialog);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 0, 231, 161));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 170, 93, 27));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 170, 171, 31));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(270, 20, 81, 81));
        my_dialog->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(my_dialog);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 376, 23));
        my_dialog->setMenuBar(menuBar);
        mainToolBar = new QToolBar(my_dialog);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        my_dialog->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(my_dialog);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        my_dialog->setStatusBar(statusBar);

        retranslateUi(my_dialog);

        QMetaObject::connectSlotsByName(my_dialog);
    } // setupUi

    void retranslateUi(QMainWindow *my_dialog)
    {
        my_dialog->setWindowTitle(QApplication::translate("my_dialog", "my_dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("my_dialog", "Enter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class my_dialog: public Ui_my_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MY_DIALOG_H
