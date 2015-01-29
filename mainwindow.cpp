#include "mainwindow.h"
#include "ui_mainwindow.h"

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
void MainWindow::paintEvent(QPaintEvent *e)
{
    //BASIC LINE
//    QPainter p(this);
//    QPen dottedPen;
//    dottedPen.setCapStyle(Qt::RoundCap);
//    dottedPen.setWidth(6);
//    dottedPen.setColor(Qt::red);
//    p.setPen(dottedPen);
//    p.drawLine(10,10,100,100);

    //POLYGON EXAMPLE
//    QPainter p(this);
//    QPolygon pol;
//    pol<<QPoint(10,10);
//    pol<<QPoint(10,100);
//    pol<<QPoint(100,10);
//    pol<<QPoint(100,100);
//    QPen dottedPen;
//    dottedPen.setCapStyle(Qt::RoundCap);
//    dottedPen.setWidth(6);
//    dottedPen.setColor(Qt::red);
//    p.setPen(dottedPen);
//    p.drawPolygon(pol);

    //Transformation
        QPainter p(this);
        QPolygon pol;
        pol<<QPoint(10,10);
        pol<<QPoint(10,100);
        pol<<QPoint(100,10);
        pol<<QPoint(100,100);
        QPen dottedPen;
        dottedPen.setCapStyle(Qt::RoundCap);
        dottedPen.setWidth(6);
        dottedPen.setColor(Qt::red);
        p.setPen(dottedPen);
        p.drawPolygon(pol);

        p.translate(30,30);
        p.rotate(45);
        p.drawPolygon(pol);

}
