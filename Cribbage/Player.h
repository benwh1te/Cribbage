#pragma once
#include "common.h"
#include "Card.h"

class Player
{
public:
	Player();
	~Player();

	vector<Card*> hand;
};

