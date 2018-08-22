#include "PointCounter.h"



PointCounter::PointCounter()
{
}


PointCounter::~PointCounter()
{
}

int PointCounter::get15Points(vector<Card*> hand) {
	int sum = 0;
	int total = 0;
	for (unsigned int i = 0; i < setsFor15.size(); i++) {
		for (unsigned int j = 0; j < setsFor15[i].size(); j++) {
			sum += hand[setsFor15[i][j]]->pointValue;
		}
		if (sum == 15)
			total += 1;
		sum = 0;
	}
	return total * 2;
}

int PointCounter::getRunPoints(vector<Card*> hand) {
	int total = 0;
	bool done = false;
	std::sort(hand.begin(), hand.end(), sorter );
	//check for run of 5
	for (int i = 4; i > 0; i++) {
		if (hand[i]->order - hand[i - 1]->order == 1)
			total = 4;
	}
	if (total == 4) {
		return 5;
	}
	// check for runs of 4
	for (unsigned int i = 0; i < setsOfFour.size(); i++) {

	}
}