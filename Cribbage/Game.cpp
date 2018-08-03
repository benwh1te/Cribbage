#include "Game.h"



Game::Game()
{
}


Game::~Game()
{
}

void Game::deal() {
	int j = 51;
	for (int i = 0; i < 6; i++) {
		Card* toAdd = deck.getDeck()[j];
		toAdd->ownedByPlayer = 1;
		deck.getDeck().pop_back();
		playerOne.hand.push_back(toAdd);
		j -= 1;

		toAdd = deck.getDeck()[j];
		toAdd->ownedByPlayer = 2;
		deck.getDeck().pop_back();
		playerTwo.hand.push_back(toAdd);
		j -= 1;
	}
}
