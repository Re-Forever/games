#pragma once
#include "dice.h"

class LiarsDice : public Dice {
public:
	CREATE_GAME(LiarsDice);
private:
	int number = 5;
};
