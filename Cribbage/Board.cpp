#include "Board.h"



Board::Board()
{
}


Board::~Board()
{
}

void Board::clearRound() {
	for (int i = currentRound.size()-1; !currentRound.empty(); i--) {
		if (currentRound[i]->ownedByPlayer == 1)
			playerOneCards.push_back(currentRound[i]);
		else
			playerTwoCards.push_back(currentRound[i]);
		currentRound.pop_back();
	}
	currentRoundSum = 0;
}

void Board::clearBoard(vector<Card*>& deck) {
	for (int i = playerOneCards.size() -1 ; !playerOneCards.empty(); i--) {
		deck.push_back(playerOneCards[i]);
		playerOneCards.pop_back();
	}
	for (int i = playerTwoCards.size() -1 ; !playerTwoCards.empty(); i--) {
		deck.push_back(playerTwoCards[i]);
		playerTwoCards.pop_back();
	}
	for (int i = crib.size() - 1; !crib.empty(); i--) {
		deck.push_back(crib[i]);
		crib.pop_back();
	}
	currentRoundSum = 0;
}