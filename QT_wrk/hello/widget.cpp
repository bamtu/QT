#include "widget.h"


#include <QLabel>
#include <QPushButton>
#include <QApplication>
#include <QLCDNumber>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QLabel *label = new QLabel("abc", this);  //label widget 만듬.
    label->resize(100, 100);
    //label->show();

    QPushButton *push = new QPushButton("btn",this);
    push->resize(50,50);
    //push->show();

    connect(push, SIGNAL(clicked()), SLOT(slotExit()));

    QLCDNumber *lcd = new QLCDNumber(99);  //생성자 호출
    lcd->setBinMode();
    lcd->setSegmentStyle(QLCDNumber::Flat);
    lcd->display(20204848);
    lcd->resize(300,300);
    //lcd->show();
}

Widget::~Widget()
{
}

void Widget::slotExit(){
    qDebug("in function");  //debugging
    qApp->quit();
}
