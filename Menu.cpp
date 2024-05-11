#include "Menu.h"

Menu::Menu(QWidget *parent): QMainWindow(parent)
{
    ui.setupUi(this);
    this->setStyleSheet(
        "background: #009933"
        /*"background-image: url(photos/background.jpg);" 
        "background-position: center;"
        "background-repeat: no-repeat;"
        "background-attachment: fixed;"
        "background-size: cover;"*/
    );
}

Menu::~Menu()
{}
