#include "cartwindow.h"
#include "ui_cartwindow.h"

CartWindow::CartWindow(QWidget *parent) :
    QMainWindow(parent),
    uiCart(new Ui::CartWindow)
{
    uiCart->setupUi(this);

}

CartWindow::~CartWindow()
{
    delete uiCart;
}

void CartWindow::on_Button_Checkout_clicked()
{
    uiCart->Button_Checkout->setDisabled(true);
    uiCart->Button_Delete->setDisabled(true);

    //Cart Calculations

}
