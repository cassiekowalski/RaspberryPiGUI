#include "mainview.h"
#include "ui_mainview.h"
#include "nodeCommunication.h"
#include <QDebug>

nodeCommunication *t;

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);
    ui->lblName->setVisible(false);
    ui->editName->setVisible(false);
    ui->lblCurrTemp->setVisible(false);
    ui->currTemp->setVisible(false);
    ui->lblPrefTemp->setVisible(false);
    ui->editTemp->setVisible(false);
    ui->btnUpdate->setVisible(false);
    ui->editTemp->setRange(50,99);

    t = new nodeCommunication();
    t->start();

    connect(ui->btnSetup, SIGNAL(clicked()), this, SLOT(generateRooms()));
    connect(ui->roomList, SIGNAL(itemSelectionChanged()), this, SLOT(roomChange()));
    connect(ui->btnUpdate, SIGNAL(clicked()), this, SLOT(updateStruct()));
}

MainView::~MainView()
{
    delete ui;
}

void MainView::generateRooms()
{
    //get current size of vector
    int vectorSize = t->roomAry.size();
    for (int i=0;i<vectorSize;i++){
        ui->roomList->addItem(t->roomAry[i].name);
    }
    //ui->btnSetup->setEnabled(false);
}

void MainView::roomChange()
{
    ui->lblName->setVisible(true);
    ui->editName->setVisible(true);
    ui->lblCurrTemp->setVisible(true);
    ui->currTemp->setVisible(true);
    ui->lblPrefTemp->setVisible(true);
    ui->editTemp->setVisible(true);
    ui->btnUpdate->setVisible(true);

    int currRow = ui->roomList->currentRow();

    //set the fields to display the proper data for the newly selected room
    ui->editName->setText(t->roomAry[currRow].name);
    ui->currTemp->setText(QString::number(t->roomAry[currRow].currTemp));
    ui->editTemp->setValue(t->roomAry[currRow].prefTemp);
}

void MainView::updateStruct()
{
    /*
    int currRow = ui->roomList->currentRow();
    int currNodeId = listIdToNodeId[currRow];

    //update name of room on list item
    ui->roomList->currentItem()->setText(ui->editName->text());

    //update the struct's information for this nodeid
    t->roomAry[currNodeId]->name = ui->editName->text();
    t->roomAry[currNodeId]->prefTemp = ui->editTemp->value();
    */
}
