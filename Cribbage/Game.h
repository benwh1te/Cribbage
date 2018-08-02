#pragma once

#include "common.h"
#include "Player.h"
#include "Deck.h"

class Game
{
public:
	Game();
	~Game();

	Player playerOne;
	Player playerTwo;

	Deck deck;

	 std::vector<std::vector<std::string>> deal();

	 virtual void getMoves() = 0;
};

