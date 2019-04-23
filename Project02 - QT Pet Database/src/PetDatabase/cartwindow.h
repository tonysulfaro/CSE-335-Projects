#ifndef CARTWINDOW_H
#define CARTWINDOW_H
#include <QMainWindow>
#include <QDialog>

namespace Ui {
class CartWindow;
}

class CartWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CartWindow(QWidget *parent = nullptr);
    ~CartWindow();

    Ui::CartWindow* getUi() const {return uiCart;}

private slots:
    void on_Button_Checkout_clicked();

    void on_Button_Delete_clicked();

private:
    Ui::CartWindow *uiCart;
};

#endif // CARTWINDOW_H
