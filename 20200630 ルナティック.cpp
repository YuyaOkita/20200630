#include <iostream>
#include <ctime>
using namespace std;
#include "battle lunatic.h"




int main() {
	srand((unsigned int)time(NULL));


	FF_CHAR ffst[]{
		{"Alpha",rand() % 11 + 20,rand() % 3 + 3,2},//20～30の11個の数の中からランダムに選ぶ。+20で20～30
		{"Beta",rand() % 11 + 20,rand() % 3 + 3,10}//3～5の3個の数の中からランダムに選ぶ。+3で3～5
	};



	for (int i = 0; i < 2; i++) {
		cout << "NAME　" << ffst[i].name << endl;
		cout << "HP　" << ffst[i].hp << endl;
		cout << "攻撃力　" << ffst[i].atk << endl;
		cout << "防御力　" << ffst[i].def << endl;
		cout << endl;
	}

	versus(&ffst[0], &ffst[1]);//ポインタ変数alphaにffst[0]のアドレスを入れる。
	//ポインタ変数betaにffst[1]のアドレスを入れる
}