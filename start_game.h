#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_start_game.h"
#include <QDialog>


class new_game_window : public QDialog
{
	Q_OBJECT

public:
	new_game_window(QWidget* parent = nullptr);
	~new_game_window();
	void create();

private:
	Ui::start_game ui_start;
};