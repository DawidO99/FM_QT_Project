#include "start_game.h"
#include <qmessagebox.h>

new_game_window::new_game_window(QWidget* parent) :QDialog(parent)
{
    this->setWindowState(Qt::WindowMaximized);
    ui_start.setupUi(this);
    this->setStyleSheet(
        "background: #ff0000;"
    );
    connect(ui_start.pushButton, &QPushButton::clicked, this, &exit);
}

new_game_window::~new_game_window(){}

