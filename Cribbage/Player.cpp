#include "Player.h"



Player::Player()
{
}


Player::~Player()
{
}

string Player::getMove() {
	for (int i = 0; i < hand.size(); i++) {
		cout << hand[i] << "\t";
	}
	cout << "\nPlease select a card to play (value_suit): ";
	string play;
	cin >> play;
	return play;
}
