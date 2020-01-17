#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
  class Form1;
};

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked(bool checked);

private:
    Ui::Form1 *ui;
};
#endif // WIDGET_H
