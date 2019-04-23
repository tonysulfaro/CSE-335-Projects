/********************************************************************************
** Form generated from reading UI file 'cartwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTWINDOW_H
#define UI_CARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *checkoutButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
<<<<<<< HEAD:Project02 - QT Pet Database/src/build-PetDatabase-Desktop_Qt_5_12_3_clang_64bit-Debug/ui_cartwindow.h
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
=======
        if (CartWindow->objectName().isEmpty())
            CartWindow->setObjectName(QString::fromUtf8("CartWindow"));
        CartWindow->resize(800, 600);
        centralwidget = new QWidget(CartWindow);
>>>>>>> parent of bf1c96e... ShowHideDone:Project02 - QT Pet Database/src/build-PetDatabase-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/ui_cartwindow.h
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 70, 401, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(verticalLayoutWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        deleteButton = new QPushButton(verticalLayoutWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkoutButton = new QPushButton(verticalLayoutWidget);
        checkoutButton->setObjectName(QString::fromUtf8("checkoutButton"));

        horizontalLayout->addWidget(checkoutButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
<<<<<<< HEAD:Project02 - QT Pet Database/src/build-PetDatabase-Desktop_Qt_5_12_3_clang_64bit-Debug/ui_cartwindow.h
<<<<<<< HEAD:Project02 - QT Pet Database/src/build-PetDatabase-Desktop_Qt_5_12_3_clang_64bit-Debug/ui_cartwindow.h
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
=======
=======
>>>>>>> parent of bf1c96e... ShowHideDone:Project02 - QT Pet Database/src/build-PetDatabase-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/ui_cartwindow.h
        CartWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CartWindow);
>>>>>>> parent of bf1c96e... ShowHideDone:Project02 - QT Pet Database/src/build-PetDatabase-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/ui_cartwindow.h
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
<<<<<<< HEAD:Project02 - QT Pet Database/src/build-PetDatabase-Desktop_Qt_5_12_3_clang_64bit-Debug/ui_cartwindow.h
<<<<<<< HEAD:Project02 - QT Pet Database/src/build-PetDatabase-Desktop_Qt_5_12_3_clang_64bit-Debug/ui_cartwindow.h
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Price", nullptr));
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        checkoutButton->setText(QApplication::translate("MainWindow", "Checkout", nullptr));
=======
=======
>>>>>>> parent of bf1c96e... ShowHideDone:Project02 - QT Pet Database/src/build-PetDatabase-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/ui_cartwindow.h
        CartWindow->setWindowTitle(QApplication::translate("CartWindow", "MainWindow", nullptr));
        Button_Delete->setText(QApplication::translate("CartWindow", "Delete", nullptr));
        Button_Checkout->setText(QApplication::translate("CartWindow", "Checkout", nullptr));
>>>>>>> parent of bf1c96e... ShowHideDone:Project02 - QT Pet Database/src/build-PetDatabase-Desktop_Qt_5_12_0_MinGW_64_bit-Debug/ui_cartwindow.h
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTWINDOW_H
