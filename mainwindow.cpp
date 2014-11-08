#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->sum_pushButton,SIGNAL(clicked()),this,SLOT(onClickSum()));              //Sum button
    connect(ui->sub_pushButton,SIGNAL(clicked()),this, SLOT(onClickSubstract()));       //Substract button
    connect(ui->mult_pushButton,SIGNAL(clicked()),this,SLOT(onClickMultiply()));        //Multiply Button
    connect(ui->con_pushButton,SIGNAL(clicked()),this,SLOT(onClickConjugate1()));       //Conjugate Button for Complex 1
    connect(ui->con2_pushButton,SIGNAL(clicked()),this,SLOT(onClickConjugate2()));      //Conjugate Button for Complex 2
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onClickSum()
{
    QString Re, Im;
    Complejo a, b, c;


    /*Set real and imaginary values*/

    a.setRe(ui->re1_lineEdit->text().toFloat());
    a.setIm(ui->im1_lineEdit->text().toFloat());

    b.setRe(ui->re2_lineEdit->text().toFloat());
    b.setIm(ui->im2_lineEdit->text().toFloat());

    /*Calculate the sum of the complex numbers*/
    c = c.sumaComplejo(a,b);

    //Convert Real and imaginary part of complex result to Qstring
    Re = QString::number(c.getRe());
    Im = QString::number(c.getIm());

    //Set Result
    ui->reresult_lineEdit->setText(Re);
    ui->imres_lineEdit->setText(Im);


}

void MainWindow::onClickSubstract()
{

    QString Re, Im;
    Complejo a, b, c;


    /*Set real and imaginary values*/

    a.setRe(ui->re1_lineEdit->text().toFloat());
    a.setIm(ui->im1_lineEdit->text().toFloat());

    b.setRe(ui->re2_lineEdit->text().toFloat());
    b.setIm(ui->im2_lineEdit->text().toFloat());

    /*Calculate the sum of the complex numbers*/
    c = c.restaComplejo(a,b);

    //Convert Real and imaginary part of complex result to Qstring
    Re = QString::number(c.getRe());
    Im = QString::number(c.getIm());

    //Set Result
    ui->reresult_lineEdit->setText(Re);
    ui->imres_lineEdit->setText(Im);
}

void MainWindow::onClickMultiply()
{
    QString Re, Im;
    Complejo a, b, c;


    /*Set real and imaginary values*/

    a.setRe(ui->re1_lineEdit->text().toFloat());
    a.setIm(ui->im1_lineEdit->text().toFloat());

    b.setRe(ui->re2_lineEdit->text().toFloat());
    b.setIm(ui->im2_lineEdit->text().toFloat());

    /*Calculate the sum of the complex numbers*/
    c = c.multComplejo(a,b);

    //Convert Real and imaginary part of complex result to Qstring
    Re = QString::number(c.getRe());
    Im = QString::number(c.getIm());

    //Set Result
    ui->reresult_lineEdit->setText(Re);
    ui->imres_lineEdit->setText(Im);
}

void MainWindow::onClickConjugate1()
{

    QString Re, Im;
    Complejo a, b, c;


    /*Set real and imaginary values*/

    a.setRe(ui->re1_lineEdit->text().toFloat());
    a.setIm(ui->im1_lineEdit->text().toFloat());

    b.setRe(ui->re2_lineEdit->text().toFloat());
    b.setIm(ui->im2_lineEdit->text().toFloat());

    /*Calculate the conjugate of Complex 1 of the complex numbers*/
    c.conjugadoComplejo(a);

    //Convert Real and imaginary part of complex result to Qstring
    Re = QString::number(c.getRe());
    Im = QString::number(c.getIm());

    //Set Results
    ui->reresult_lineEdit->setText(Re);
    ui->imres_lineEdit->setText(Im);
}

void MainWindow::onClickConjugate2()
{
    QString Re, Im;
    Complejo a, b, c;


    /*Set real and imaginary values*/

    a.setRe(ui->re1_lineEdit->text().toFloat());
    a.setIm(ui->im1_lineEdit->text().toFloat());

    b.setRe(ui->re2_lineEdit->text().toFloat());
    b.setIm(ui->im2_lineEdit->text().toFloat());

    /*Calculate the sum of the complex numbers*/
    c.conjugadoComplejo(b);

    //Convert Real and imaginary part of complex result to Qstring
    Re = QString::number(c.getRe());
    Im = QString::number(c.getIm());

    //Set results
    ui->reresult_lineEdit->setText(Re);
    ui->imres_lineEdit->setText(Im);

}
