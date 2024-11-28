#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        ui->statusbar->showMessage("Не Велера!");
    }
    if(ui->radioButton_2->isChecked()){
        ui->statusbar->showMessage("Велера!");
    }
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked()){
        ui->statusbar->showMessage("Галочка поставлена!");
    }
    else{
        ui->statusbar->showMessage("Галочка не  поставлена!");


    }

}
