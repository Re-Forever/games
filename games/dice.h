#pragma once

#include <random>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::nothrow;

#define CREATE_GAME(__TYPE__) \
static __TYPE__* create() \
{ \
    __TYPE__ *pRet = new(std::nothrow) __TYPE__(); \
    if (pRet) \
    { \
        return pRet; \
    } \
    else \
    { \
        delete pRet; \
        pRet = nullptr; \
        return nullptr; \
    } \
}

class Dice{
public:
	//Dice(int s, int n, int p):side(s), number(n), people(p){};
	void set_sides(int);
	void set_number(int);
	void set_people(int);
	int roll();
	CREATE_GAME(Dice);
	void Dice_play();
private:
	int side = 6;
	int number;
	int people;
};

