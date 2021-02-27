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

    void on_actionLight_Mode_triggered();

    void on_actionDark_Mode_triggered();

private:
    Ui::MainWindow *ui;
    void TableWidgetDisplay();
};




#endif // MAINWINDOW_H
