#include "mainview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainView w;
    w.showFullScreen();
    return a.exec();
}
