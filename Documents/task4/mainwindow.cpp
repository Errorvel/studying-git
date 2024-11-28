#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resouces/img/1458264596_authorisation_lock_padlock_safe_password_privacy_security_icon-icons.com_55333 (4).png");
    int w = ui->image->width();
    int h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   QString login = ui->Login->text();
   QString password = ui->Password->text();

   if(login == "Velera" && password == "1212")
   {
       //QMessageBox::information(this, "госпожа, вы тут)", "Добро пожаловать, госпожа!!");
       ui->statusbar->showMessage("Вы авторизованы");
   }
   else{
       //QMessageBox::warning(this,"Вы не моя, гсопожа!!","Не прошел проверку");
       ui->statusbar->showMessage("Вы не авторизованы");

   }
}
