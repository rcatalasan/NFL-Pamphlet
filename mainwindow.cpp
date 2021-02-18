#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include "dialog.h"

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



void MainWindow::buttonClickHandler()
{
}

void MainWindow::on_actionContactUs_triggered()
{
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}
