#include "widget2.h"

#include "ui_form2.h"

Widget2::Widget2(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
}

Widget2::~Widget2()
{
    delete ui;
}

void Widget2::on_pushButton_clicked()
{
    qDebug("CLICKED widget2");
}
