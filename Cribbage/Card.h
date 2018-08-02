#pragma once
#include "common.h"

using std::string;

class Card {
public:
	Card(string value, string suit);
	~Card();

	friend ostream& operator<<(ostream& os, const Card* c);

private:
	string value;
	string suit;
	int ownedByPlayer;
};

