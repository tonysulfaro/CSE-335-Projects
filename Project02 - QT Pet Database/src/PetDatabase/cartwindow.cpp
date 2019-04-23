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

    QList<QTableWidgetItem *> a =  uiCart->tableWidget->selectedItems();
    QVector<QVector<QString>> rows;


    while(a.size()>1){
    QVector<QString> row;
        for(int i = 0; i<2; i++){
            row.push_back(a[1]->text());
            //grand_total+= a[1]->text().toDouble();
            a.pop_front();
        }
    }

    uiCart->label->setText("TOTAL:");

}

void CartWindow::on_Button_Delete_clicked()
{
    auto i = uiCart->tableWidget->selectionModel()->selectedRows();

    for(auto a: i){
        uiCart->tableWidget->removeRow(a.row());
    }
}
