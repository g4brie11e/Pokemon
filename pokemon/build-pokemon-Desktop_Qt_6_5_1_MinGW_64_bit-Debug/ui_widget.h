/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *menu;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *jouer;
    QLabel *label_20;
    QPushButton *gerer;
    QWidget *jouer_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QProgressBar *progressBar_4;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_4;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_13;
    QPushButton *menu_3;
    QPushButton *pushButton_12;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *menu_2;
    QSpacerItem *horizontalSpacer;
    QLabel *test_img;
    QProgressBar *progressBar_2;
    QLabel *label_15;
    QLabel *img2;
    QLabel *img3;
    QLabel *img1;
    QWidget *gerer_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_18;
    QLabel *label_16;
    QPushButton *pushButton_10;
    QComboBox *comboBox;
    QLabel *label_4;
    QFrame *line_3;
    QLabel *label_13;
    QLabel *label_8;
    QFrame *line_2;
    QTableView *tableView_4;
    QLabel *label_7;
    QFrame *line_5;
    QLabel *label_10;
    QPushButton *pushButton_5;
    QLabel *label_17;
    QComboBox *comboBox_2;
    QPushButton *menu_4;
    QPushButton *pushButton;
    QFrame *line;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_2;
    QFrame *line_7;
    QLabel *label_12;
    QTableView *tableView_5;
    QFrame *line_6;
    QLabel *label_9;
    QLabel *label_14;
    QTableView *tableView;
    QTableView *tableView_2;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QTableView *tableView_3;
    QLabel *label_19;
    QPushButton *pushButton_8;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QTableView *tableView_6;

    void setupUi(QMainWindow *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(842, 520);
        centralwidget = new QWidget(Widget);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 10, 821, 501));
        menu = new QWidget();
        menu->setObjectName("menu");
        gridLayoutWidget_3 = new QWidget(menu);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(280, 190, 281, 131));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        jouer = new QPushButton(gridLayoutWidget_3);
        jouer->setObjectName("jouer");

        gridLayout_3->addWidget(jouer, 1, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_3);
        label_20->setObjectName("label_20");
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_20, 0, 0, 1, 1);

        gerer = new QPushButton(gridLayoutWidget_3);
        gerer->setObjectName("gerer");

        gridLayout_3->addWidget(gerer, 2, 0, 1, 1);

        stackedWidget->addWidget(menu);
        jouer_2 = new QWidget();
        jouer_2->setObjectName("jouer_2");
        jouer_2->setAutoFillBackground(false);
        gridLayoutWidget_2 = new QWidget(jouer_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(150, 70, 542, 321));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        progressBar_4 = new QProgressBar(gridLayoutWidget_2);
        progressBar_4->setObjectName("progressBar_4");
        progressBar_4->setLayoutDirection(Qt::RightToLeft);
        progressBar_4->setMaximum(500);
        progressBar_4->setValue(386);

        gridLayout_2->addWidget(progressBar_4, 7, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 5, 1, 1);

        line_4 = new QFrame(gridLayoutWidget_2);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 0, 3, 8, 1);

        progressBar_3 = new QProgressBar(gridLayoutWidget_2);
        progressBar_3->setObjectName("progressBar_3");
        progressBar_3->setMaximum(500);
        progressBar_3->setValue(172);

        gridLayout_2->addWidget(progressBar_3, 7, 0, 1, 1);

        progressBar = new QProgressBar(gridLayoutWidget_2);
        progressBar->setObjectName("progressBar");
        progressBar->setEnabled(true);
        QFont font;
        font.setKerning(true);
        progressBar->setFont(font);
        progressBar->setLayoutDirection(Qt::RightToLeft);
        progressBar->setMaximum(500);
        progressBar->setValue(386);
        progressBar->setTextVisible(true);

        gridLayout_2->addWidget(progressBar, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget_2);
        pushButton_13->setObjectName("pushButton_13");

        gridLayout_2->addWidget(pushButton_13, 6, 4, 1, 1);

        menu_3 = new QPushButton(gridLayoutWidget_2);
        menu_3->setObjectName("menu_3");

        gridLayout_2->addWidget(menu_3, 7, 4, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget_2);
        pushButton_12->setObjectName("pushButton_12");

        gridLayout_2->addWidget(pushButton_12, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 5, 1, 1);

        menu_2 = new QPushButton(gridLayoutWidget_2);
        menu_2->setObjectName("menu_2");

        gridLayout_2->addWidget(menu_2, 7, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        test_img = new QLabel(gridLayoutWidget_2);
        test_img->setObjectName("test_img");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(test_img->sizePolicy().hasHeightForWidth());
        test_img->setSizePolicy(sizePolicy);
        test_img->setTextFormat(Qt::AutoText);

        gridLayout_2->addWidget(test_img, 5, 5, 2, 1);

        progressBar_2 = new QProgressBar(gridLayoutWidget_2);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setLayoutDirection(Qt::LeftToRight);
        progressBar_2->setMaximum(500);
        progressBar_2->setValue(172);
        progressBar_2->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_2->addWidget(progressBar_2, 0, 4, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_2);
        label_15->setObjectName("label_15");

        gridLayout_2->addWidget(label_15, 4, 5, 1, 1);

        img2 = new QLabel(gridLayoutWidget_2);
        img2->setObjectName("img2");

        gridLayout_2->addWidget(img2, 5, 0, 2, 1);

        img3 = new QLabel(gridLayoutWidget_2);
        img3->setObjectName("img3");

        gridLayout_2->addWidget(img3, 1, 1, 3, 1);

        img1 = new QLabel(gridLayoutWidget_2);
        img1->setObjectName("img1");

        gridLayout_2->addWidget(img1, 1, 4, 3, 1);

        stackedWidget->addWidget(jouer_2);
        gerer_2 = new QWidget();
        gerer_2->setObjectName("gerer_2");
        gridLayoutWidget = new QWidget(gerer_2);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(70, 50, 714, 430));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 10, 0, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout->addWidget(pushButton_7, 10, 5, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 10, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label->setFont(font1);

        gridLayout->addWidget(label, 1, 0, 1, 2);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName("label_18");

        gridLayout->addWidget(label_18, 8, 7, 1, 2);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 8, 3, 1, 3);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName("pushButton_10");

        gridLayout->addWidget(pushButton_10, 12, 7, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 2, 3, 1, 3);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 7, 7, 1, 6);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 4, 0, 1, 2);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 3, 8, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 7, 0, 1, 6);

        tableView_4 = new QTableView(gridLayoutWidget);
        tableView_4->setObjectName("tableView_4");

        gridLayout->addWidget(tableView_4, 9, 0, 1, 2);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 3, 5, 1, 1);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 8, 2, 3, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 3, 11, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 10, 7, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName("label_17");

        gridLayout->addWidget(label_17, 8, 0, 1, 2);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        gridLayout->addWidget(comboBox_2, 2, 10, 1, 3);

        menu_4 = new QPushButton(gridLayoutWidget);
        menu_4->setObjectName("menu_4");

        gridLayout->addWidget(menu_4, 12, 5, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 4, 4, 1, 2);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName("line");
        line->setAutoFillBackground(false);
        line->setLineWidth(5);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 6, 10, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 3, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 7, 1, 1);

        line_7 = new QFrame(gridLayoutWidget);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 11, 0, 1, 13);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 2, 8, 1, 1);

        tableView_5 = new QTableView(gridLayoutWidget);
        tableView_5->setObjectName("tableView_5");
        tableView_5->setAlternatingRowColors(false);
        tableView_5->setSortingEnabled(false);

        gridLayout->addWidget(tableView_5, 5, 0, 1, 6);

        line_6 = new QFrame(gridLayoutWidget);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 8, 9, 3, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 3, 10, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 4, 7, 1, 2);

        tableView = new QTableView(gridLayoutWidget);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 9, 3, 1, 3);

        tableView_2 = new QTableView(gridLayoutWidget);
        tableView_2->setObjectName("tableView_2");

        gridLayout->addWidget(tableView_2, 9, 7, 1, 2);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 4, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 10, 8, 1, 1);

        tableView_3 = new QTableView(gridLayoutWidget);
        tableView_3->setObjectName("tableView_3");

        gridLayout->addWidget(tableView_3, 9, 11, 1, 2);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName("label_19");

        gridLayout->addWidget(label_19, 8, 10, 1, 3);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout->addWidget(pushButton_8, 10, 12, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName("label_11");
        label_11->setEnabled(true);

        gridLayout->addWidget(label_11, 3, 12, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 4, 11, 1, 2);

        tableView_6 = new QTableView(gridLayoutWidget);
        tableView_6->setObjectName("tableView_6");
        tableView_6->setAlternatingRowColors(false);
        tableView_6->setSortingEnabled(false);

        gridLayout->addWidget(tableView_6, 5, 7, 1, 6);

        stackedWidget->addWidget(gerer_2);
        Widget->setCentralWidget(centralwidget);

        retranslateUi(Widget);
        QObject::connect(progressBar, SIGNAL(valueChanged(int)), Widget, SLOT(test()));
        QObject::connect(jouer, SIGNAL(pressed()), Widget, SLOT(test()));
        QObject::connect(gerer, SIGNAL(pressed()), Widget, SLOT(test()));
        QObject::connect(menu_2, SIGNAL(pressed()), Widget, SLOT(test()));
        QObject::connect(menu_3, SIGNAL(pressed()), Widget, SLOT(test()));
        QObject::connect(menu_4, SIGNAL(pressed()), Widget, SLOT(test()));

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QMainWindow *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        jouer->setText(QCoreApplication::translate("Widget", "JOUER", nullptr));
        label_20->setText(QCoreApplication::translate("Widget", "MENU", nullptr));
        gerer->setText(QCoreApplication::translate("Widget", "GERER", nullptr));
        progressBar_4->setFormat(QCoreApplication::translate("Widget", "%v/%m PV", nullptr));
        progressBar_3->setFormat(QCoreApplication::translate("Widget", "%v/%m PV", nullptr));
        progressBar->setFormat(QCoreApplication::translate("Widget", "%v/%m PV", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Widget", "ATTAQUE", nullptr));
        menu_3->setText(QCoreApplication::translate("Widget", "Menu", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Widget", "ATTAQUE", nullptr));
        menu_2->setText(QCoreApplication::translate("Widget", "Menu", nullptr));
        test_img->setText(QString());
        progressBar_2->setFormat(QCoreApplication::translate("Widget", "%v/%m PV", nullptr));
        label_15->setText(QString());
        img2->setText(QString());
        img3->setText(QString());
        img1->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Widget", "Gu\303\251rir", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "Transf\303\251rer", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "Transf\303\251rer", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Joueur 1", nullptr));
        label_18->setText(QCoreApplication::translate("Widget", "Boite PC", nullptr));
        label_16->setText(QCoreApplication::translate("Widget", "Mon \303\251quipe", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Widget", "Sauvegarder", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "kigfr\"de", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "efgsgs", nullptr));

        label_4->setText(QCoreApplication::translate("Widget", "Dresseur", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "Hautes herbes", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "Niveau:", nullptr));
        label_7->setText(QString());
        label_10->setText(QCoreApplication::translate("Widget", "Nb points", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "Gu\303\251rir", nullptr));
        label_17->setText(QCoreApplication::translate("Widget", "Boite PC", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Widget", "a", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Widget", "b", nullptr));

        menu_4->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Capture", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "1", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Niveau:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Joueur 2", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "Dresseur", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "1", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "Hautes herbes", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Nb points", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "Transf\303\251rer", nullptr));
        label_19->setText(QCoreApplication::translate("Widget", "Mon \303\251quipe", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "Transf\303\251rer", nullptr));
        label_11->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Widget", "Capture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
