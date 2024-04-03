#include "widget.h"
#include "ui_widget.h"
#include <QtSql/QSqlDatabase>
#include <QSql>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlTableModel>

QSqlDatabase db = QSqlDatabase::addDatabase ("QSQLITE") ;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
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

        ui->tvPokemon->setModel(model);
        ui->tvPokemon->setAlternatingRowColors(true);


    }
}

Widget::~Widget()
{
    delete ui;
    db.close();
}

