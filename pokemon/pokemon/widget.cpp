#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::test()
{

    ui->test_img->setPixmap(QPixmap("test.png"));
    ui->img1->setPixmap(QPixmap("test.png"));
    ui->img2->setPixmap(QPixmap("test.png"));
    ui->img3->setPixmap(QPixmap("test.png"));
    if (ui->jouer->isDown())
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    if (ui->gerer->isDown())
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    if ((ui->menu_2->isDown())or(ui->menu_3->isDown())or(ui->menu_4->isDown()))
    {
        ui->stackedWidget->setCurrentIndex(0);
    }

}

