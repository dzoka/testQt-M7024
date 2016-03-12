#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "m7024.h"

M7024 m7024("/dev/ttyUSB0");

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_verticalSlider1_valueChanged(int value)
{
    m7024.SetValue(0,value);
}

void MainWindow::on_verticalSlider2_valueChanged(int value)
{
    m7024.SetValue(1,value);
}

void MainWindow::on_verticalSlider3_valueChanged(int value)
{
    m7024.SetValue(2,value);
}

void MainWindow::on_verticalSlider4_valueChanged(int value)
{
    m7024.SetValue(3,value);
}
