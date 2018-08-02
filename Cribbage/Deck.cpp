#include "Deck.h"

std::vector<string> Suits = { "H", "C", "S", "D" };
std::vector<string> Values = {
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9",
	"10",
	"J",
	"Q",
	"K",
	"A"
};



Deck::Deck() {
	std::vector<string>::iterator itValues, itSuits;
	for (itValues = Values.begin(); itValues != Values.end(); itValues++) {
		for (itSuits = Suits.begin(); itSuits != Suits.end(); itSuits++) {
			cards.push_back(new Card(*itValues, *itSuits));
		}
	}
}


Deck::~Deck() {
}

void Deck::shuffle() {
	for (int i = 0; i < 300; i++) {
		int first = rand() % 52;
		int second = rand() % 52;
		if (first == second)
			i--;

		Card *tmp = cards.at(first);
		cards[first] = cards[second];
		cards[second] = tmp;
	}
}

ostream& operator<<(ostream& os, const Deck& d) {
	std::vector<Card*>::iterator it;
	int i = 0;
	std::vector<Card*> cards = d.getDeck();
	for (it = cards.begin(); it != cards.end(); it++, i++) {
		if (i % 5 == 4)
			os << '\n';
		os << *it;
	}
	return os;
}