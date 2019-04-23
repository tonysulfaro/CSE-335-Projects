#include "mainwindow.h"
#include "cartwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QtGui>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_Button_ShowCart_clicked()
{
    if (ui->Button_ShowCart->text() == "Show Cart"){
        ui->Button_ShowCart->setText("Hide Cart");
//        ui->CartWindow->close();
        this->close();



    }
    else {
        ui->Button_ShowCart->setText("Show Cart");

    }
}
