/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralWidget;
    QFrame *mainFrame;
    QWidget *editRoom;
    QLineEdit *editName;
    QLabel *lblName;
    QLabel *lblCurrTemp;
    QLabel *currTemp;
    QLabel *lblPrefTemp;
    QSpinBox *editTemp;
    QPushButton *btnUpdate;
    QPushButton *btnSetup;
    QListWidget *roomList;
    QPushButton *btnExit;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(800, 530);
        MainView->setMinimumSize(QSize(800, 530));
        MainView->setMaximumSize(QSize(800, 530));
        MainView->setStyleSheet(QString::fromUtf8("#MainView {\n"
"	background: #27313E;\n"
"}\n"
"\n"
"#centralWidget {\n"
"	background: #27313E;\n"
"}\n"
"\n"
"#mainFrame {\n"
"	border: 7px solid #DD4A38;\n"
"	border-radius: 20px;\n"
"	background: #27313E;\n"
"}\n"
"\n"
"#roomList {\n"
"	border: 7px solid #DD4A38;\n"
"	border-radius: 20px;\n"
"	background: #27313E;\n"
"}\n"
"\n"
"#lblName, #lblCurrTemp, #lblPrefTemp, #currTemp {\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}\n"
"\n"
"#editName {\n"
"	color: 27313E;\n"
"	font-size: 18px;\n"
"}\n"
"\n"
"#editTemp {\n"
"	font-size: 18px;\n"
"}\n"
"\n"
"#btnUpdate, #btnAdd {\n"
"	font-size: 18px;\n"
"	padding-left: 10px;\n"
"	padding-top: 45px;\n"
"	padding-bottom: 45px;\n"
"	border: 6px solid #27313E;\n"
"	border-radius: 15px;\n"
"	background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4A5D75, stop: 1 #354354);\n"
"	width: 100px;\n"
"	color: white;\n"
"}\n"
"\n"
"#btnUpdate:!enabled, #btnAdd:!enabled {\n"
"	color: #354354;\n"
"}\n"
"\n"
"#btnUpdate:pressed, #btnAdd:pressed {\n"
"	background: QLinearGr"
                        "adient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4A5D75, stop: 1 green);\n"
"}\n"
"\n"
"QScrollBar::vertical {\n"
"	border: 3px solid #354354;\n"
"	border-radius: 5px;\n"
"    background:white;\n"
"    width: 30px;\n"
"    margin: 5px 0px 0px 0px;\n"
"	max-height: 377px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"    stop: 0  #DD4A38, stop: 0.5 #DD4A38,  stop:1 #DD4A38);\n"
"    min-height: 0px;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"    stop: 0  #DD4A38, stop: 0.5 #DD4A38,  stop:1 #DD4A38);\n"
"    height: px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"    stop: 0  #DD4A38, stop: 0.5 #DD4A38,  stop:1 #DD4A38);\n"
"    height: 0px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}"));
        centralWidget = new QWidget(MainView);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(800, 530));
        mainFrame = new QFrame(centralWidget);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setGeometry(QRect(30, 30, 490, 420));
        mainFrame->setMaximumSize(QSize(490, 420));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        editRoom = new QWidget(mainFrame);
        editRoom->setObjectName(QString::fromUtf8("editRoom"));
        editRoom->setGeometry(QRect(10, 10, 470, 400));
        editName = new QLineEdit(editRoom);
        editName->setObjectName(QString::fromUtf8("editName"));
        editName->setGeometry(QRect(170, 30, 261, 30));
        lblName = new QLabel(editRoom);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setGeometry(QRect(30, 30, 81, 25));
        lblCurrTemp = new QLabel(editRoom);
        lblCurrTemp->setObjectName(QString::fromUtf8("lblCurrTemp"));
        lblCurrTemp->setGeometry(QRect(30, 120, 211, 25));
        currTemp = new QLabel(editRoom);
        currTemp->setObjectName(QString::fromUtf8("currTemp"));
        currTemp->setGeometry(QRect(310, 120, 211, 25));
        lblPrefTemp = new QLabel(editRoom);
        lblPrefTemp->setObjectName(QString::fromUtf8("lblPrefTemp"));
        lblPrefTemp->setGeometry(QRect(30, 210, 231, 25));
        editTemp = new QSpinBox(editRoom);
        editTemp->setObjectName(QString::fromUtf8("editTemp"));
        editTemp->setGeometry(QRect(310, 210, 50, 30));
        btnUpdate = new QPushButton(editRoom);
        btnUpdate->setObjectName(QString::fromUtf8("btnUpdate"));
        btnUpdate->setEnabled(true);
        btnUpdate->setGeometry(QRect(30, 300, 200, 70));
        btnSetup = new QPushButton(editRoom);
        btnSetup->setObjectName(QString::fromUtf8("btnSetup"));
        btnSetup->setGeometry(QRect(250, 300, 200, 70));
        roomList = new QListWidget(centralWidget);
        roomList->setObjectName(QString::fromUtf8("roomList"));
        roomList->setGeometry(QRect(551, 30, 219, 420));
        roomList->setMaximumSize(QSize(219, 420));
        roomList->setStyleSheet(QString::fromUtf8("#roomList {\n"
"	padding: 5px;\n"
"	color: white;\n"
"	font-size: 20px;\n"
"}\n"
"\n"
"#roomList::item {\n"
"	padding-left: 10px;\n"
"	padding-top: 45px;\n"
"	padding-bottom: 45px;\n"
"	border: 6px solid #27313E;\n"
"	border-radius: 15px;\n"
"	background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4A5D75, stop: 1 #354354);\n"
"	width: 100px;\n"
"	color: white;\n"
"}\n"
"\n"
"#roomList::item::selected {\n"
"	background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4A5D75, stop: 1 #BA3E34);\n"
"	color: white;\n"
"}"));
        roomList->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        btnExit = new QPushButton(centralWidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(30, 480, 93, 28));
        MainView->setCentralWidget(centralWidget);

        retranslateUi(MainView);
        QObject::connect(btnExit, SIGNAL(clicked()), MainView, SLOT(close()));

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "MainView", 0, QApplication::UnicodeUTF8));
        editName->setText(QString());
        lblName->setText(QApplication::translate("MainView", "Name: ", 0, QApplication::UnicodeUTF8));
        lblCurrTemp->setText(QApplication::translate("MainView", "Current Temperature: ", 0, QApplication::UnicodeUTF8));
        currTemp->setText(QApplication::translate("MainView", "0", 0, QApplication::UnicodeUTF8));
        lblPrefTemp->setText(QApplication::translate("MainView", "Preferred Temperature: ", 0, QApplication::UnicodeUTF8));
        btnUpdate->setText(QApplication::translate("MainView", "Update Room", 0, QApplication::UnicodeUTF8));
        btnSetup->setText(QApplication::translate("MainView", "Setup", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("MainView", "Debug Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
