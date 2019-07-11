#include "dice.h"
#include<algorithm>

void Dice::set_sides(int num) {
	this->side = num;
}

void Dice::set_number(int num) {
	this->number = num;
}

void Dice::set_people(int p){
	this->people = p;
}

int Dice::roll() {
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(1, this->side);
	return distribution(generator);
}

void Dice::Dice_play(){
	while(1){
		int *res = new int[people];
		for (int i = 0; i < people; ++i) {
			res[i] = roll();
		}
		cout << "最小值是 " << *std::min_element(res, res + people) << endl;
		delete[] res;
	}
}
