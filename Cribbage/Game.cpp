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

void Game::getMove(int player) {
	string play = "";
	int index = -1;
	if (player == 1) {
		play = playerOne.getMove();
		for (unsigned int i = 0; i < playerOne.hand.size(); i++) {
			string tmp = playerOne.hand[i]->value + "_" + playerOne.hand[i]->suit;
			if (tmp == play) {
				index = i;
				board.playCard(playerOne.hand[index]);
				playerOne.hand.erase(playerOne.hand.begin() + index);
				break;
			}
		}
	}
	else {
		play = playerTwo.getMove();
		for (unsigned int i = 0; i < playerTwo.hand.size(); i++) {
			string tmp = playerTwo.hand[i]->value + "_" + playerTwo.hand[i]->suit;
			if (tmp == play) {
				index = i;
				board.playCard(playerTwo.hand[index]);
				playerTwo.hand.erase(playerTwo.hand.begin() + index);
				break;
			}
		}
	}
	if (index == -1) {
		// get move again and report error
	}
}

void Game::testGetMove() {
	for (int i = 0; i < 2; i++) {
		board.crib.push_back(playerOne.hand.back());
		playerOne.hand.pop_back();
		board.crib.push_back(playerTwo.hand.back());
		playerTwo.hand.pop_back();
	}

	for (int i = playerOne.hand.size() - 1; !playerOne.hand.empty(); i--) {
		board.playerOneCards.push_back(playerOne.hand[i]);
		playerOne.hand.pop_back();
	}
	for (int i = playerTwo.hand.size() - 1; !playerTwo.hand.empty(); i--) {
		board.playerTwoCards.push_back(playerTwo.hand[i]);
		playerTwo.hand.pop_back();
	}
}