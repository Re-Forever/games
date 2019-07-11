#pragma once

#include "dice.h"
#include "liarsDice.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::nothrow;





enum rule{
	dice,
	liarsDice,
	gamesnumber
};


class Games {
public:
	Games(int r):gamerule(r){};
	void rule_choose(int);
	void game_start();
	void game_end();
private:
	int gamerule;
	
};