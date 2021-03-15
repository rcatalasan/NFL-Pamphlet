#ifndef HELPMENU_H
#define HELPMENU_H

#include <QDialog>

namespace Ui {
class helpMenu;
}

class helpMenu : public QDialog
{
    Q_OBJECT

public:
    explicit helpMenu(QWidget *parent = nullptr);
    ~helpMenu();

private:
    Ui::helpMenu *ui;
};

#endif // HELPMENU_H
