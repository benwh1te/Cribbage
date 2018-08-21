#include "Card.h"


Card::Card(string value, string suit)
{
	this->value = value;
	this->suit = suit;
	this->ownedByPlayer = 0;
	{
		if (value == "2") {
			this->order = 1;
			this->pointValue = 2;
		}
		else if (value == "3") {
			this->order = 2;
			this->pointValue = 3;
		}
		else if (value == "4") {
			this->order = 3;
			this->pointValue = 4;
		}
		else if (value == "5") {
			this->order = 4;
			this->pointValue = 5;
		}
		else if (value == "6") {
			this->order = 5;
			this->pointValue = 6;
		}
		else if (value == "7") {
			this->order = 6;
			this->pointValue = 7;
		}
		else if (value == "8") {
			this->order = 7;
			this->pointValue = 8;
		}
		else if (value == "9") {
			this->order = 8;
			this->pointValue = 9;
		}
		else if (value == "10") {
			this->order = 9;
			this->pointValue = 10;
		}
		else if (value == "J") {
			this->order = 10;
			this->pointValue = 10;
		}
		else if (value == "Q") {
			this->order = 11;
			this->pointValue = 10;
		}
		else if (value == "K") {
			this->order = 12;
			this->pointValue = 10;
		}
		else if (value == "A") {
			this->order = 0;
			this->pointValue = 1;
		}
	}
}


Card::~Card()
{
}

ostream& operator<<(ostream& os, const Card* c) {
	os << c->value << "_" << c->suit << "\t";
	return os;
}