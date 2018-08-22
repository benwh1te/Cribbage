#pragma once
#include "common.h"

using std::string;

class Card {
public:
	Card(string value, string suit);
	~Card();

	int ownedByPlayer;

	friend ostream& operator<<(ostream& os, const Card* c);

	friend bool operator<(const Card& l, const Card& r) { return l.order < r.order; }


	string value;
	string suit;
	int order;
	int pointValue;
	
};

