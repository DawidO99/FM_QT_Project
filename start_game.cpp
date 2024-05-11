#include "start_game.h"
#include <qmessagebox.h>

new_game_window::new_game_window(QWidget* parent) :QDialog(parent)
{
    this->setWindowState(Qt::WindowMaximized);
    ui_start.setupUi(this);
    this->setStyleSheet(
        "background: #ff0000;"
    );
}

new_game_window::~new_game_window(){}

