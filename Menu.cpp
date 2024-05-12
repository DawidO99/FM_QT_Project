#include "Menu.h"
#include <qmessagebox.h>

Menu::Menu(QWidget *parent): QMainWindow(parent)
{
    this->setWindowState(Qt::WindowMaximized); //ustawiamy okno na maksymaln¹ rozdzielczosc
    ui.setupUi(this);
    this->setStyleSheet(
        //"background-color: #009933"
        "background-image: url(photos/background.jpg);" 
        "background-position-y: center;"
    ); //tu ustawiamy wszystkie parametry css, typu tlo i jego ustawienie
    connect(ui.pushButton_new_game, &QPushButton::clicked, this, &Menu::change_window); 
    //po kliknieciu "nowa gra" odpalamy change_window()

}

Menu::~Menu()
{}

void Menu::change_window()
{
    hide(); //ukrywamy okno Menu
    test = new new_game_window(this); //dynamiczna alokacja dla zmiennej test (plik menu.h)
    test->show(); //odpalamy okno start_game
}