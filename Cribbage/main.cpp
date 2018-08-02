#include "common.h"
#include "Deck.h"


int main() {
	Deck d = Deck();
	d.shuffle();
	cout << d;
	system("pause");
	return 0;
}