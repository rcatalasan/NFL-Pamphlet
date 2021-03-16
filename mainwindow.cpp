#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include "dialog.h"
#include "header.h"
#include "loginform.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QSortFilterProxyModel>
#include <QDebug>
#include "helpmenu.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    connect(loginForm, &LoginForm::on_expandTeamsButton_clicked, this, &MainWindow::expandTables);
    ui->setupUi(this);
    TableWidgetInit();
    on_actionLight_Mode_triggered();
    ui->tableNFLWidget->setVisible(false);
    ui->tableAFCWidget->setVisible(false);
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

void MainWindow::on_actionHelp_triggered()
{
    helpMenu dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::TableWidgetInit()
{
    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->setRowCount(AR_SIZE);
    ui->tableAFCWidget->setColumnCount(9);
    ui->tableAFCWidget->setRowCount(1);
    ui->tableNFLWidget->setColumnCount(9);
    ui->tableNFLWidget->setRowCount(1);
    int AFCTeams = -1;
    int NFLTeams = -1;
    bool isAFC = false;
    QStringList hLabels; // set the column labels
    hLabels << "Team Name" << "Stadium Name" << "Seating Capacity" << "Location" << "Conference" << "Division" << "Surface Type" << "Roof Type" << "Date Opened";
    ui->tableWidget->setHorizontalHeaderLabels(hLabels);
    ui->tableNFLWidget->setHorizontalHeaderLabels(hLabels);
    ui->tableAFCWidget->setHorizontalHeaderLabels(hLabels);
    //NFL arr[AR_SIZE];
    QString fName = ":/new/prefix2/NFL.txt";
    arr->inputFn(fName, arr, AR_SIZE);
    // inset the data into cells
    for(int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        QTableWidgetItem *item;
        QTableWidgetItem *item2;
        if(arr[i].getConference()[0] == 'A')
        {
            isAFC = true;
            AFCTeams++;
            ui->tableAFCWidget->setRowCount(AFCTeams + 1);
        } else {
            NFLTeams++;
            isAFC = false;
            ui->tableNFLWidget->setRowCount(NFLTeams + 1);
        }
        for(int j = 0; j < ui->tableWidget->columnCount(); j++)
        {
            item = new QTableWidgetItem;
            item2 = new QTableWidgetItem;
            if(j == 0)
            {
                item->setText(QString::fromStdString(arr[i].getTeamName()));
                item2->setText(QString::fromStdString(arr[i].getTeamName()));
            }
            if(j == 1)
            {
                item->setText(QString::fromStdString(arr[i].getStadiumName()));
                item2->setText(QString::fromStdString(arr[i].getStadiumName()));
            }
            if(j == 2)
            {
                item->setText(QString::fromStdString(thousandSeparator(arr[i].getSeatingCapacity())));
                item2->setText(QString::fromStdString(thousandSeparator(arr[i].getSeatingCapacity())));
            }
            if(j == 3)
            {
                item->setText(QString::fromStdString(arr[i].getLocation()));
                item2->setText(QString::fromStdString(arr[i].getLocation()));
            }
            if(j == 4)
            {
                item->setText(QString::fromStdString(arr[i].getConference()));
                item2->setText(QString::fromStdString(arr[i].getConference()));
            }
            if(j == 5)
            {
                item->setText(QString::fromStdString(arr[i].getDivision()));
                item2->setText(QString::fromStdString(arr[i].getDivision()));
            }
            if(j == 6)
            {
                item->setText(QString::fromStdString(arr[i].getSurfaceType()));
                item2->setText(QString::fromStdString(arr[i].getSurfaceType()));
            }
            if(j == 7)
            {
                item->setText(QString::fromStdString(arr[i].getStadiumRoofType()));
                item2->setText(QString::fromStdString(arr[i].getStadiumRoofType()));
            }
            if(j == 8)
            {
                item->setText(QString::fromStdString(to_string(arr[i].getDateOpened())));
                item2->setText(QString::fromStdString(to_string(arr[i].getDateOpened())));
            }
            item->setFlags(item->flags() ^ Qt::ItemIsEditable);
            ui->tableWidget->setItem(i, j, item);
            if(isAFC == true)
            {
                item2->setFlags(item2->flags() ^ Qt::ItemIsEditable);
                ui->tableAFCWidget->setItem(AFCTeams, j, item2);
            }
            else
            {
                item2->setFlags(item2->flags() ^ Qt::ItemIsEditable);
                ui->tableNFLWidget->setItem(NFLTeams, j, item2);
            }
        }
    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableWidget->setSortingEnabled(true);
    ui->tableNFLWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableNFLWidget->setSortingEnabled(true);
    ui->tableAFCWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableAFCWidget->setSortingEnabled(true);
    totalSize = arr->totalCap(arr);
    ui->totalCap->setText("Total seating capacity of NFL: " + QString::fromStdString(thousandSeparator(totalSize)));
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
    ui->NFLPicture->setPalette(this->style()->standardPalette());
    ui->NFLPicture->setStyleSheet("");
    ui->tableAFCWidget->setPalette(this->style()->standardPalette());
    ui->tableAFCWidget->setStyleSheet("");
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
    ui->tableNFLWidget->setStyleSheet("QTableView::item:selected { color:white; background:#000000;}"
                                   "QTableCornerButton::section { background-color:#232326; }"
                                   "QHeaderView::section {color:white;}"
                                   "QHeaderView::section {background-color:#232326;}"
                                   "QHeaderView::section { border-top: 0px solid black}"
                                   "QHeaderView::section { border-right: 0px solid black}"
                                   "QHeaderView::section { border-bottom: 0px solid black}"
                                   "QHeaderView::section { border-left: 0px solid black}");
    ui->tableAFCWidget->setStyleSheet("QTableView::item:selected { color:white; background:#000000;}"
                                   "QTableCornerButton::section { background-color:#232326; }"
                                   "QHeaderView::section {color:white;}"
                                   "QHeaderView::section {background-color:#232326;}"
                                   "QHeaderView::section { border-top: 0px solid black}"
                                   "QHeaderView::section { border-right: 0px solid black}"
                                   "QHeaderView::section { border-bottom: 0px solid black}"
                                   "QHeaderView::section { border-left: 0px solid black}");
}


void MainWindow::on_radioNFL_clicked()
{
    ui->tableWidget->setVisible(false);
    ui->tableAFCWidget->setVisible(false);
    ui->tableNFLWidget->setVisible(true);
}

void MainWindow::on_radioAFC_clicked()
{
    ui->tableWidget->setVisible(false);
    ui->tableNFLWidget->setVisible(false);
    ui->tableAFCWidget->setVisible(true);
}

void MainWindow::on_radioAll_clicked()
{
    ui->tableWidget->setVisible(true);
    ui->tableNFLWidget->setVisible(false);
    ui->tableAFCWidget->setVisible(false);
}

void MainWindow::on_actionMaintenance_triggered()
{
    loginForm->setModal(true);
    loginForm->exec();
}

void MainWindow::expandTables()
{
    NFL arr2[1];
    ui->tableWidget->setRowCount(0); ui->tableWidget->setColumnCount(0); // must reset table
    ui->tableAFCWidget->setRowCount(0); ui->tableAFCWidget->setColumnCount(0); // to avoid
    ui->tableNFLWidget->setRowCount(0); ui->tableNFLWidget->setColumnCount(0); // wrong index!
    TableWidgetInit();
    QString fileName = (":/new/prefix2/NFLExpansion.txt");
    arr2->inputFn(fileName,arr2, 1);
    int element = 0;
    int rows = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(rows + 1);
    QTableWidgetItem *item3;
    QTableWidgetItem *item4;

    int AFCRows = ui->tableAFCWidget->rowCount();
    int NFLRows = ui->tableNFLWidget->rowCount();
    if(arr2[element].getConference()[0] == 'A') ui->tableAFCWidget->setRowCount(AFCRows + 1);
    else ui->tableNFLWidget->setRowCount(NFLRows + 1);
    for(int i = 0; i < 9; ++i)
    {
        item3 = new QTableWidgetItem;
        item4 = new QTableWidgetItem;
        switch(i){
        case(0):
        {
            item3->setText(QString::fromStdString(arr2[element].getTeamName()));
            item4->setText(QString::fromStdString(arr2[element].getTeamName()));
            break;
        }
        case(1):
        {
            item3->setText(QString::fromStdString(arr2[element].getStadiumName()));
            item4->setText(QString::fromStdString(arr2[element].getStadiumName()));
            break;
        }
        case(2):
        {
            item3->setText(QString::fromStdString(thousandSeparator(arr[i].getSeatingCapacity())));
            item4->setText(QString::fromStdString(thousandSeparator(arr[i].getSeatingCapacity())));
            break;
        }
        case(3):
        {
            item3->setText(QString::fromStdString(arr2[element].getLocation()));
            item4->setText(QString::fromStdString(arr2[element].getLocation()));
            break;
        }
        case(4):
        {
            item3->setText(QString::fromStdString(arr2[element].getConference()));
            item4->setText(QString::fromStdString(arr2[element].getConference()));
            break;
        }
        case(5):
        {
            item3->setText(QString::fromStdString(arr2[element].getDivision()));
            item4->setText(QString::fromStdString(arr2[element].getDivision()));
            break;
        }
        case(6):
        {
            item3->setText(QString::fromStdString(arr2[element].getSurfaceType()));
            item4->setText(QString::fromStdString(arr2[element].getSurfaceType()));
            break;
        }
        case(7):
        {
            item3->setText(QString::fromStdString(arr2[element].getStadiumRoofType()));
            item4->setText(QString::fromStdString(arr2[element].getStadiumRoofType()));
            break;
        }
        case(8):
        {
            item3->setText(QString::fromStdString(to_string(arr2[element].getDateOpened())));
            item4->setText(QString::fromStdString(to_string(arr2[element].getDateOpened())));
            break;
        }
        }
        item3->setFlags(item3->flags() ^ Qt::ItemIsEditable);
        ui->tableWidget->setItem(rows, i, item3);
        if(arr2[element].getConference()[0] == 'A')
        {
            item4->setFlags(item4->flags() ^ Qt::ItemIsEditable);
            ui->tableAFCWidget->setItem(AFCRows, i, item4);
        }
        else
        {
            item4->setFlags(item4->flags() ^ Qt::ItemIsEditable);
            ui->tableNFLWidget->setItem(NFLRows, i, item4);
        }
    }
    ui->tableNFLWidget->setSortingEnabled(true);
    totalSize += arr2[element].getSeatingCapacity();
    ui->totalCap->setText("Total seating capacity of NFL: " + QString::fromStdString(thousandSeparator(totalSize)));
}
