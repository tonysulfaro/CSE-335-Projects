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
<<<<<<< HEAD
    void loadData();
=======
    void on_Button_ShowCart_clicked();
>>>>>>> bakerso1_P2

private:
    Ui::MainWindow *ui;
    CartWindow* cartWindowStorage = nullptr;
};

#endif // MAINWINDOW_H
