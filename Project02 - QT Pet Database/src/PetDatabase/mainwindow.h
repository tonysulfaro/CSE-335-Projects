#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cartwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void loadData();
    void addToCart();
	void on_Button_ShowCart_clicked();

private:
    Ui::MainWindow *ui;
	CartWindow* cartWindowStorage = nullptr;
};

#endif // MAINWINDOW_H
