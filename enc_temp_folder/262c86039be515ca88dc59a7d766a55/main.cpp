#include "common.h"
#include "Game.h"


int main() {
	Game game;
	game.deal();
	cout << "After dealing.\n\n";
	vector<Card*>::iterator it;
	for (it = game.playerOne.hand.begin(); it != game.playerOne.hand.end(); it++) 
		cout << *it;
	cout << "\nP1 hand\n\n";
	for (it = game.playerTwo.hand.begin(); it != game.playerTwo.hand.end(); it++)
		cout << *it;
	cout << "\nP2 hand\n\n"; 
	game.testGetMove();
	/*for (it = game.playerOne.hand.begin(); it != game.playerOne.hand.end(); it++)
		cout << *it;
	cout << "\nP1 hand\n\n";
	for (it = game.playerTwo.hand.begin(); it != game.playerTwo.hand.end(); it++)
		cout << *it;
	cout << "\nP2 hand\n\n";*/

	cout << "Played1 cards\n";
	for (it = game.board.playerOneCards.begin(); it != game.board.playerOneCards.end(); it++) {
		cout << *it;
	}
	cout << "\n\n";
	cout << "Played2 cards\n";
	for (it = game.board.playerTwoCards.begin(); it != game.board.playerTwoCards.end(); it++) {
		cout << *it;
	}
	cout << "\n\n";

	cout << "Played crib\n";
	for (it = game.board.crib.begin(); it != game.board.crib.end(); it++) {
		cout << *it;
	}
	cout << "\n\n";
	game.board.clearBoard(game.deck.getDeck());
	cout << "board cleared";
	cout << game.deck;
	cout << "\n\n";
	

	system("pause");
	return 0;
}