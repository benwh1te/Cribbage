#include "Game.h"



Game::Game()
{
	deck.shuffle();
}


Game::~Game()
{
}

void Game::deal() {
	int j = 51;


	for (int i = 0; i < 6; i++) {

		putInHand(deck.getDeck()[j], 1);
		j -= 1;

		putInHand(deck.getDeck()[j], 2);
		j -= 1;
	}
}


void Game::putInHand(Card* card, int player) {
	card->ownedByPlayer = player;
	if (player == 1)
		playerOne.hand.push_back(card);
	else
		playerTwo.hand.push_back(card);
	deck.getDeck().pop_back();
	
}