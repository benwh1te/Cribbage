#pragma once
#include "common.h"
#include "Card.h"

class Deck {
public:
	Deck();
	~Deck();

	vector<Card*> getDeck() const { return cards; }
	void shuffle();
	friend ostream& operator<<(ostream& os, const Deck& d);

private:
	vector<Card*> cards;
};

