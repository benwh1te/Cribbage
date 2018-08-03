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

	virtual void getMoves() = 0;

	void deal();
};

