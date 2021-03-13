#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <fstream>
#include <cstring>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionContactUs_triggered();

    void on_actionHelp_triggered();

    void on_actionLight_Mode_triggered();

    void on_actionDark_Mode_triggered();

    void on_radioAll_clicked();

    void on_radioAFC_clicked();

    void on_radioNFL_clicked();

private:
    Ui::MainWindow *ui;
    void TableWidgetInit();
    void initConfTables();
};




#endif // MAINWINDOW_H
