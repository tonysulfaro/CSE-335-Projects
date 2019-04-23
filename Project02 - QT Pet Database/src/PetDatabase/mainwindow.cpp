#include "mainwindow.h"
#include "cartwindow.h"
#include "ui_mainwindow.h"
#include "ui_cartwindow.h"

#include <QApplication>
#include <QtGui>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if (cartWindowStorage == nullptr){
        cartWindowStorage = new CartWindow(this);
    }
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_Button_ShowCart_clicked()
{


        if (ui->Button_ShowCart->text() == "Show Cart"){
            ui->Button_ShowCart->setText("Hide Cart");
            cartWindowStorage->show();
        }
        else {
            ui->Button_ShowCart->setText("Show Cart");
            cartWindowStorage->close();
        }

}
