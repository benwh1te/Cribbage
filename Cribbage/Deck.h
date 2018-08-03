#pragma once
#include "common.h"
#include "Card.h"

class Deck {
public:
	Deck();
	~Deck();

	vector<Card*>& getDeck() { return cards; }
	void shuffle();
	friend ostream& operator<<(ostream& os, Deck& d);

private:
	vector<Card*> cards;
};

