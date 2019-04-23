#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
<<<<<<< HEAD
=======
#include "ui_cartwindow.h"
>>>>>>> parent of bf1c96e... ShowHideDone

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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
