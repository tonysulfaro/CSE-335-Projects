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
    uiCart->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    //Cart Calculations
    double grand_total = 0.0;

    for (int i=0;i< uiCart->tableWidget->rowCount();i++) {
            QTableWidgetItem *item =  uiCart->tableWidget->item(i,1);
            grand_total+= item->text().toDouble();
        }

    QString total_text = "<font color='red'>";
            total_text +="TOTAL: " + QString::number(grand_total);
            total_text +="</font>";
    uiCart->label->setText(total_text);
}

void CartWindow::on_Button_Delete_clicked()
{
    auto i = uiCart->tableWidget->selectionModel()->selectedRows();

    for(auto a: i){
        uiCart->tableWidget->removeRow(a.row());
    }
}
