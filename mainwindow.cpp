#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include "dialog.h"
#include "header.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QSortFilterProxyModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TableWidgetDisplay();
    on_actionLight_Mode_triggered();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionContactUs_triggered()
{
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::TableWidgetDisplay()
{
    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->setRowCount(AR_SIZE);

    QStringList hLabels; // set the column labels
    hLabels << "Team Name" << "Stadium Name" << "Seating Capacity" << "Location" << "Conference" << "Division" << "Surface Type" << "Roof Type" << "Date Opened";
    ui->tableWidget->setHorizontalHeaderLabels(hLabels);
    NFL arr[AR_SIZE];
    arr->inputFn(arr, AR_SIZE);
    // inset the data into cells
    for(int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        QTableWidgetItem *item;
        for(int j = 0; j < ui->tableWidget->columnCount(); j++)
        {
            item = new QTableWidgetItem;
            if(j == 0)
                item->setText(QString::fromStdString(arr[i].getTeamName()));
            if(j == 1)
                item->setText(QString::fromStdString(arr[i].getStadiumName()));
            if(j == 2)
                item->setText(QString::fromStdString(to_string(arr[i].getSeatingCapacity())));
            if(j == 3)
                item->setText(QString::fromStdString(arr[i].getLocation()));
            if(j == 4)
                item->setText(QString::fromStdString(arr[i].getConference()));
            if(j == 5)
                item->setText(QString::fromStdString(arr[i].getDivision()));
            if(j == 6)
                item->setText(QString::fromStdString(arr[i].getSurfaceType()));
            if(j == 7)
                item->setText(QString::fromStdString(arr[i].getStadiumRoofType()));
            if(j == 8)
                item->setText(QString::fromStdString(to_string(arr[i].getDateOpened())));
            item->setFlags(item->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(i, j, item);
        }
    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableWidget->setSortingEnabled(true);
}



void MainWindow::on_actionLight_Mode_triggered()
{
    ui->NFLPamphletDark->setVisible(false);
    ui->NFLPicture->setVisible(true);
    ui->actionDark_Mode->setChecked(false);
    setPalette(this->style()->standardPalette());
    setStyleSheet("");
    ui->tableWidget->setPalette(this->style()->standardPalette());
    ui->tableWidget->setStyleSheet("");
}

void MainWindow::on_actionDark_Mode_triggered()
{
    ui->actionLight_Mode->setChecked(false);
    ui->NFLPamphletDark->setVisible(true);
    ui->NFLPicture->setVisible(false);
    setStyleSheet(
"color: #dedede;"
"background-color: #2f3136;"
"selection-color:dedede;"
"selection-background-color: #40444b;");
    ui->tableWidget->setStyleSheet("QTableView::item:selected { color:white; background:#000000;}"
                                   "QTableCornerButton::section { background-color:#232326; }"
                                   "QHeaderView::section {color:white;}"
                                   "QHeaderView::section {background-color:#232326;}"
                                   "QHeaderView::section { border-top: 0px solid black}"
                                   "QHeaderView::section { border-right: 0px solid black}"
                                   "QHeaderView::section { border-bottom: 0px solid black}"
                                   "QHeaderView::section { border-left: 0px solid black}");
}

