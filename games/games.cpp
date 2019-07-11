// games.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "games.h"


int main(){
	Games A = Games(0);
	A.game_start();
    return 0;
}

void Games::rule_choose(int r){
	if (r >= gamesnumber) {
		this->gamerule = gamesnumber;
	}
	else{
		this->gamerule = r;
	}
}

void Games::game_start(){
	if (gamerule >= gamesnumber) {
		game_end();
		return;
	}
	Games play = Games(gamerule);
	switch (gamerule) {
		case dice: {
			Dice *a = Dice::create();
			if (a) {
				a->set_people(3);
				a->Dice_play();
			}
			break;
		}
		case liarsDice: {
			LiarsDice *a = LiarsDice::create();
			cout << "here" << endl;
			if (a) {
				cout << a->roll() << endl;
			}
			break;
		}
		default: {
			
		}
	}	
	game_end();

}

void Games::game_end(){
	cout << "end" << endl;
	getchar();
}
