#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    counter(0)

{
    ui->setupUi(this);
    QString labelText = "Painiketta Count painettu "
                   + QString::number(counter)
                   + " kertaa";
    ui->labelInfo->setText(labelText);
    ui->txtResult->setText(QString::number(counter));

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btnCount_clicked()
{
    counter++;

    ui->labelInfo->setText(
        QString("Painiketta Count painettu %1 kertaa").arg(counter)
        );

    ui->txtResult->setText(QString::number(counter));

}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;

    ui->labelInfo->setText(
        QString("Painiketta Count painettu %1 kertaa").arg(counter)
        );

    ui->txtResult->setText(QString::number(counter));


}

