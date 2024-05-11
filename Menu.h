#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Menu.h"
#include "start_game.h"

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);
    ~Menu();
    void change_window();

private:
    Ui::MenuClass ui;
    new_game_window* test; //zmienna typu new_game_window do odpalenia okna
};
