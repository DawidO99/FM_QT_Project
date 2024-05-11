#include "Menu.h"
#include <QtWidgets/QApplication>
#include <Windows.h>

int main(int argc, char *argv[])
{
    QApplication main_window(argc, argv); //tworzymy okno typu .exe
    Menu window; //tworzymy okno typu Menu
    window.show(); //wyswietlamy okno typu Menu
    return main_window.exec(); //zwracamy execa
}
