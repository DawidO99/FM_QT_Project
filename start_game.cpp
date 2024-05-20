#include "start_game.h"
#include <qmessagebox.h>
#include <QApplication>
#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>

new_game_window::new_game_window(QWidget* parent) :QDialog(parent)
{
    this->setWindowState(Qt::WindowMaximized);
    ui_start.setupUi(this);

    this->setStyleSheet(
        "background-image: url(photos/Manager photo.jpg);"
        "background-position: center"

    );
    connect(ui_start.exit_game, &QPushButton::clicked, this, &exit);
    connect(ui_start.accept_button, &QPushButton::clicked, this, &new_game_window::create);
}


void new_game_window::create()
{
    auto name = ui_start.name_input->toPlainText().toStdString();
    auto team_name = ui_start.team_name_input->toPlainText().toStdString();
    auto team_short = ui_start.team_short_input->toPlainText().toStdString();
    QString your_name = QString::fromStdString(name);
    QString your_team_name = QString::fromStdString(team_name);
    QString team_short_name = QString::fromStdString(team_short);
    QString output = "Nazywasz sie " + your_name + "\n" + "Twoj zespol to " + your_team_name + ", a jego skrot to " + team_short_name;
    ui_start.output->setText(output);
}
new_game_window::~new_game_window(){}

