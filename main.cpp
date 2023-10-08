#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    int var1;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
