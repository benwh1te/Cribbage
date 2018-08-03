#include "Board.h"



Board::Board()
{
}


Board::~Board()
{
}

void Board::clearRound() {
	for (int i = currentRound.size(); !currentRound.empty(); i--) {
		if (currentRound[i]->ownedByPlayer == 1)
			playerOneCards.push_back(currentRound[i]);
		else
			playerTwoCards.push_back(currentRound[i]);
		currentRound.pop_back();
	}
}

void Board::clearBoard(vector<Card*>& deck) {

}