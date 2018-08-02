#include "Card.h"


Card::Card(string value, string suit)
{
	this->value = value;
	this->suit = suit;
	this->ownedByPlayer = 0;
}


Card::~Card()
{
}

ostream& operator<<(ostream& os, const Card* c) {
	os << c->value << "_" << c->suit << "\t";
	return os;
}