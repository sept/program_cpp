/********************************************************************************
** Form generated from reading UI file 'test_qt.ui'
**
** Created: Sat Oct 29 15:16:08 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_QT_H
#define UI_TEST_QT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_qt
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_qt)
    {
        if (test_qt->objectName().isEmpty())
            test_qt->setObjectName(QString::fromUtf8("test_qt"));
        test_qt->resize(421, 252);
        centralWidget = new QWidget(test_qt);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        test_qt->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_qt);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 421, 23));
        test_qt->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_qt);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        test_qt->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_qt);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        test_qt->setStatusBar(statusBar);

        retranslateUi(test_qt);

        QMetaObject::connectSlotsByName(test_qt);
    } // setupUi

    void retranslateUi(QMainWindow *test_qt)
    {
        test_qt->setWindowTitle(QApplication::translate("test_qt", "test_qt", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class test_qt: public Ui_test_qt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_QT_H
