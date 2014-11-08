#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "complejo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void onClickSum();
    void onClickSubstract();
    void onClickMultiply();
    void onClickConjugate1();
    void onClickConjugate2();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
