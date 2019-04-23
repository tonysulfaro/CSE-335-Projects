#ifndef CARTWINDOW_H
#define CARTWINDOW_H

#include <QMainWindow>


namespace Ui {
class CartWindow;
}

class CartWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CartWindow(QWidget *parent = nullptr);
    ~CartWindow();
    QString showHideCart(QString str);

private:
    Ui::CartWindow *ui;
};

#endif // CARTWINDOW_H
