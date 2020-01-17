#ifndef WIDGET2_H
#define WIDGET2_H

#include <QWidget>

namespace Ui {
  class Form2;
};

class Widget2 : public QWidget
{
    Q_OBJECT

public:
    Widget2(QWidget *parent = nullptr);
    ~Widget2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form2 *ui;
};

#endif // WIDGET2_H
