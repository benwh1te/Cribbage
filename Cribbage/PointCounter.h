#pragma once
#include "common.h"
#include "Card.h"

bool sorter(Card* l, Card* r) { return (l->order < r->order); }

class PointCounter
{
public:
	PointCounter();
	~PointCounter();

	const vector<vector<int>> setsOfTwo = {
		{0,1}, {0,2}, {0,3}, {0,4},
		{1,2}, {1,3}, {1,4}, {2,3},
		{2,4}, {3,4}
	};
	const vector<vector<int>> setsOfThree = {
		{0,1,2}, {0,1,3}, {0,2,3}, {1,2,3}, {0,1,4},
		{0,2,4}, {1,2,4}, {0,3,4}, {1,3,4}, {2,3,4}
	};
	const vector<vector<int>> setsOfFour = {
		{0,1,2,3}, {0,1,2,4}, {0,1,3,4}, {0,2,3,4}, {1,2,3,4}
	};
	const vector<int> setOfFive = { 0,1,2,3,4 };
	const vector<vector<int>> setsFor15 = {
		{ 0,1 },{ 0,2 },{ 0,3 },{ 0,4 },
		{ 1,2 },{ 1,3 },{ 1,4 },{ 2,3 },
		{ 2,4 },{ 3,4 },{ 0,1,2 },{ 0,1,3 },
		{ 0,2,3 },{ 1,2,3 },{ 0,1,4 },
		{ 0,2,4 },{ 1,2,4 },{ 0,3,4 },
		{ 1,3,4 },{ 2,3,4 },{ 0,1,2,3 },
		{ 0,1,2,4 },{ 0,1,3,4 },{ 0,2,3,4 },{ 1,2,3,4 },
		{ 0,1,2,3,4 }
	};

	int get15Points(vector<Card*> hand);
	int getRunPoints(vector<Card*> hand);

	

		
};

