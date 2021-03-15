#include "helpmenu.h"
#include "ui_helpmenu.h"

helpMenu::helpMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helpMenu)
{
    ui->setupUi(this);
}

helpMenu::~helpMenu()
{
    delete ui;
}
