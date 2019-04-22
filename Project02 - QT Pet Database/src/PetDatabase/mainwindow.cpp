#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QDir>
#include <QFile>
#include <QList>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QFile file("../../../../Technology.csv");
    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file.errorString());
        qDebug() << QDir::currentPath();
    }

    QTextStream in(&file);

    while(!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        //qDebug() << line;
        //qDebug() << fields;

        // add stuff to product table
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        QTableWidgetItem *ProductNameCell = new QTableWidgetItem;
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,ProductNameCell);
        ProductNameCell->setText(fields[1]);

        QTableWidgetItem *ProductTypeCell = new QTableWidgetItem;
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,ProductTypeCell);
        ProductTypeCell->setText(fields[0]);

        QTableWidgetItem *ProductPriceCell = new QTableWidgetItem;
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,ProductPriceCell);
        ProductPriceCell->setText(fields[4]);

        QTableWidgetItem *ProductSpecialAttribute = new QTableWidgetItem;
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,ProductSpecialAttribute);
        ProductSpecialAttribute->setText(fields[5]);

        ui->tableWidget->resizeColumnsToContents();
        //ui->tableWidget->resizeRowsToContents();
        //setCentralWidget(ui->tableWidget);

    }

    file.close();


    QFile file2("../../../../Bundles.csv");
    if(!file2.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", file2.errorString());
        qDebug() << QDir::currentPath();
    }

    QTextStream in2(&file2);

    while(!in2.atEnd()) {
        QString line = in2.readLine();
        QStringList group_fields = line.split(",");
        qDebug() << line;
        qDebug() << group_fields;

        // add stuff to product table
        ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());

        QTableWidgetItem *BundleNameCell = new QTableWidgetItem;
        ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,0,BundleNameCell);
        BundleNameCell->setText(group_fields[0]);

        QTableWidgetItem *BundlePriceCell = new QTableWidgetItem;
        ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,1,BundlePriceCell);
        BundlePriceCell->setText(group_fields[1]);

        // calculate savings
        double total_savings = 0.0;

        // loop to get products in bundle
        for(int i = 2; i < group_fields.size(); i++){
            QString group_product = group_fields[i];
            qDebug() << group_product;
        }

        // products
        QFile file("../../../../Technology.csv");
        if(!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(0, "error", file.errorString());
            qDebug() << QDir::currentPath();
        }
        QTextStream in(&file);
        while(!in.atEnd()) {
            QString line = in.readLine();
            QStringList product_fields = line.split(",");
            qDebug() << product_fields;
        }

        QTableWidgetItem *ProductSpecialAttribute = new QTableWidgetItem;
        ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,2,ProductSpecialAttribute);
        ProductSpecialAttribute->setText(QString::number(total_savings)+"%");

        ui->tableWidget_2->resizeColumnsToContents();
        //ui->tableWidget->resizeRowsToContents();
        //setCentralWidget(ui->tableWidget);

    }

    file2.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}
