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

        QSqlTableModel *pokedex;
        QSqlTableModel *boitepc;
        QSqlTableModel *equipes;
        QSqlTableModel *dresseurs;
        QSqlDatabase db;

        pokedex=new QSqlTableModel(0, db);
        boitepc=new QSqlTableModel(0, db);
        equipes=new QSqlTableModel(0, db);
        dresseurs=new QSqlTableModel(0, db);

        pokedex->setTable("pokemon");
        pokedex->setEditStrategy(QSqlTableModel::OnManualSubmit);
        pokedex->select();
        pokedex->setHeaderData(0, Qt::Horizontal, tr("Nom"));

        boitepc->setTable("boitepc");
        boitepc->setEditStrategy(QSqlTableModel::OnManualSubmit);
        boitepc->select();
        boitepc->setHeaderData(0, Qt::Horizontal, tr("Name"));

        equipes->setTable("equipes");
        equipes->setEditStrategy(QSqlTableModel::OnManualSubmit);
        equipes->select();
        equipes->setHeaderData(0, Qt::Horizontal, tr("Name"));

        dresseurs->setTable("dresseurs");
        dresseurs->setEditStrategy(QSqlTableModel::OnManualSubmit);
        dresseurs->select();
        dresseurs->setHeaderData(1, Qt::Horizontal, tr("nom"));


        ui->hh1->setModel(pokedex);
        ui->hh1->hideColumn(0);
        ui->hh1->setAlternatingRowColors(true);
        ui->hh2->setModel(pokedex);
        ui->hh2->hideColumn(0);
        ui->hh2->setAlternatingRowColors(true);

        for (int i =0; i<dresseurs->rowCount(); i++)
        {
            ui->dresseurs1->addItem(dresseurs->record(i).value(1).toString());;
        }
        for (int i =0; i<dresseurs->rowCount(); i++)
        {
            ui->dresseurs2->addItem(dresseurs->record(i).value(1).toString());;
        }
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

