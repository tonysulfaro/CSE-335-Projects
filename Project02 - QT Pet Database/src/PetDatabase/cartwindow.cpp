#include "cartwindow.h"
#include "ui_cartwindow.h"

CartWindow::CartWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CartWindow)
{
    ui->setupUi(this);
}

CartWindow::~CartWindow()
{
    delete ui;
}

QString showHideCart(QString str){
    if (str == "Hide Cart"){
//        this->close();
    }
}
