#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolBar>
#include <QListWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item_1 = new QListWidgetItem(QIcon(":/rec/img/Смешные Фото Кошек.jpg"), "Audi");
    ui->listWidget->addItem(item_1);
    QListWidgetItem *item_2 = new QListWidgetItem(QIcon(":/rec/img/1458264596_authorisation_lock_padlock_safe_password_privacy_security_icon-icons.com_55333 (3).png"), "BMW");

    ui->listWidget->addItem(item_2);
    QListWidgetItem *item_3 = new QListWidgetItem(QIcon(":/rec/img/1458264596_authorisation_lock_padlock_safe_password_privacy_security_icon-icons.com_55333 (3).png"), "Mercedes");

    ui->listWidget->addItem(item_3);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_2_triggered()
{
    ui->statusbar->showMessage("Создание нового проекта!");
}

void MainWindow::on_action_3_triggered()
{
    ui->statusbar->showMessage("Открытие проекта!");
}

void MainWindow::on_action_4_triggered()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_clicked()
{
    ui->statusbar->showMessage(ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackgroundColor(Qt::blue);
    ui->listWidget->currentItem()->setForeground(Qt::white);


}
