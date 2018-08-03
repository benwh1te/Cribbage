#pragma once
#include "common.h"
#include "Card.h"

class Board
{
public:
	Board();
	~Board();

	vector<Card*> playerOneCards;
	vector<Card*> playerTwoCards;
	vector<Card*> crib;
	Card* starter;

	vector<Card*> currentRound;

	void clearRound();
	void clearBoard(vector<Card*>& deck);
};

