/********************************************************************************
** Form generated from reading UI file 'cartwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTWINDOW_H
#define UI_CARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CartWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_Delete;
    QLabel *label;
    QPushButton *Button_Checkout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CartWindow)
    {
        if (CartWindow->objectName().isEmpty())
            CartWindow->setObjectName(QString::fromUtf8("CartWindow"));
        CartWindow->resize(483, 389);
        centralwidget = new QWidget(CartWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 451, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(verticalLayoutWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Button_Delete = new QPushButton(verticalLayoutWidget);
        Button_Delete->setObjectName(QString::fromUtf8("Button_Delete"));

        horizontalLayout->addWidget(Button_Delete);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        Button_Checkout = new QPushButton(verticalLayoutWidget);
        Button_Checkout->setObjectName(QString::fromUtf8("Button_Checkout"));

        horizontalLayout->addWidget(Button_Checkout);


        verticalLayout->addLayout(horizontalLayout);

        CartWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CartWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 483, 22));
        CartWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CartWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CartWindow->setStatusBar(statusbar);

        retranslateUi(CartWindow);

        QMetaObject::connectSlotsByName(CartWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CartWindow)
    {
        CartWindow->setWindowTitle(QApplication::translate("CartWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CartWindow", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CartWindow", "Price", nullptr));
        Button_Delete->setText(QApplication::translate("CartWindow", "Delete", nullptr));
        label->setText(QString());
        Button_Checkout->setText(QApplication::translate("CartWindow", "Checkout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CartWindow: public Ui_CartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTWINDOW_H
