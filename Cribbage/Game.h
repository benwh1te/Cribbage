#pragma once

#include "common.h"
#include "Player.h"
#include "Deck.h"
#include "Board.h"

class Game
{
public:
	Game();
	~Game();

	Player playerOne;
	Player playerTwo;

	Deck deck;

	Board board;

	//virtual void getMoves() = 0;

	void deal();
	void testGetMove();

private:
	void putInHand(Card* card, int player);
};

