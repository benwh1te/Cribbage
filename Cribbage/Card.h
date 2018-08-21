#pragma once
#include "common.h"

using std::string;

class Card {
public:
	Card(string value, string suit);
	~Card();

	int ownedByPlayer;

	friend ostream& operator<<(ostream& os, const Card* c);

	string value;
	string suit;
	int order;
	int pointValue;
	
};

