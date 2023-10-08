#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int a = {0};
}

MainWindow::~MainWindow()
{
    delete ui;
}


// изменение текста на кнопке при нажатии
void MainWindow::on_pushButton_pressed()
{
    ui->pushButton->setText("2");
}

// изменение текста на кнопке при отпускании
void MainWindow::on_pushButton_released()
{
    ui->pushButton->setText("1");
}

// ничего.тут хуй что изменишь без поломки текств
void MainWindow::on_pushButton_2_clicked()
{

}

// вывод текста в терминал
void MainWindow::on_pushButton_3_clicked() {
    if (int a = 0) {
        ui->pushButton_3->setText("ТУТ БЫЛИ ТЕРРОРИСТЫ");
    }
    else {
        ui->pushButton_3->setText("ТУТ БЫЛИ ЭКСТРЕМИСТЫ");
    }
}

//
void MainWindow::on_pushButton_2_toggled(bool checked)
{
    if(checked)
    {
        std::cout << "1" << std::endl;
        ui->pushButton_2->setText("дыа");
        int a = {0};
    }
    else
    {
        std::cout << "2" << std::endl;
        ui->pushButton_2->setText("Нет, ХУЙ НА БЛЮДЕ!");
        int a = {1};
    }
}
