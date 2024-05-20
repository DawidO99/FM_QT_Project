#include "Menu.h"
#include <qmessagebox.h>


Menu::Menu(QWidget* parent) : QMainWindow(parent)
{
    this->setWindowState(Qt::WindowMaximized); //ustawiamy okno na maksymaln¹ rozdzielczosc
    ui.setupUi(this);
    connect(ui.pushButton_new_game, &QPushButton::clicked, this, &Menu::change_window);
    connect(ui.pushButton_load_game, &QPushButton::clicked, this, &Menu::change_window);
    ui.pushButton_load_game->qlabel = ui.lewy;
}

Menu::~Menu()
{}

void Menu::change_window()
{
    hide(); //ukrywamy okno Menu
    new_window = new new_game_window(this); //dynamiczna alokacja dla zmiennej test (plik menu.h)
    new_window->show(); //odpalamy okno start_game
}