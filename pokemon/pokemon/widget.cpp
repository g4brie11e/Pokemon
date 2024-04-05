#include "widget.h"
#include "ui_widget.h"
#include <QtSql/QSqlDatabase>
#include <QSql>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlTableModel>

QSqlDatabase db = QSqlDatabase::addDatabase ("QSQLITE") ;

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    db.setDatabaseName ("pk2024.db") ;
    if(!db.open())
    {
        qDebug ( ) << "Error: connection with database failed";
    }
    else
    {
        qDebug ( ) << " Database : connection ok " ;
        QSqlQuery query("SELECT * FROM pokemon");
        while (query.next())
        {
            QString nom = query.value(query.record().indexOf("nom")).toString();
            qDebug() << "PK : " <<nom;
        }
        QSqlTableModel *model;
        QSqlDatabase db;

        model=new QSqlTableModel(0, db);
        model->setTable("pokemon");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);
        model->select();
        model->setHeaderData(0, Qt::Horizontal, tr("Name"));

        ui->tableView_5->setModel(model);
        ui->tableView_5->setAlternatingRowColors(true);

        ui->tableView_6->setModel(model);
        ui->tableView_6->setAlternatingRowColors(true);

    }
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

