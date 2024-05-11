#include "Menu.h"
#include <QtWidgets/QApplication>
#include <Windows.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Menu w;
    w.setWindowState(Qt::WindowMaximized);
    w.show();
    return a.exec();
}
