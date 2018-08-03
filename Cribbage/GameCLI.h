#pragma once
#include "common.h"
#include "Game.h"


class GameCLI : public Game {
public:
	GameCLI();
	~GameCLI();

	void getMoves();
};

