#include "widget.h"

#include "ui_form1.h"

#include <QDebug>
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::Form1)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked(bool checked)
{
    QString boolText = checked ? "true" : "false";
    qDebug("clicked widget %s", qUtf8Printable(boolText));
}
