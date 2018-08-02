#pragma once
#include "Card.h"

class Deck {
public:
	Deck();
	~Deck();

	std::vector<Card*> getDeck() const { return cards; }
	void shuffle();
	friend ostream& operator<<(ostream& os, const Deck& d);

private:
	std::vector<Card*> cards;
};

