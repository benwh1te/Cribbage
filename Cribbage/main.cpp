#include "common.h"
#include "Game.h"


int main() {
	Game game;
	cout << game.deck;
	game.deal();
	cout << "\n\n";
	vector<Card*>::iterator it;
	for (it = game.playerOne.hand.begin(); it != game.playerOne.hand.end(); it++) 
		cout << *it;
	cout << "\n\n";
	for (it = game.playerTwo.hand.begin(); it != game.playerTwo.hand.end(); it++)
		cout << *it;
	cout << "\n\n"; 
	cout << game.deck;
	cout << "\n\n";
	

	system("pause");
	return 0;
}