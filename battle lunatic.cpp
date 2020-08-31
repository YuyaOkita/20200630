#include <iostream>
using namespace std;
#include "battle lunatic.h"


void versus(FF_CHAR* alpha, FF_CHAR* beta) {//ポインタ変数alphaとポインタ変数betaを作る
	int i = 0;

	do {

		int random = 0;

		
		i++;
		cout << i << "ターン目" << endl;
		cout << endl;

		{

			cout << "Alphaのターン" << endl;
			cout << "Alphaの攻撃！" << endl;

			random = rand() % 10;//0～9のランダムな10個の数字→10分の1
			float acri = 0;

			if (random == 0) {
				acri = alpha->atk * 2.5f;

				cout << "会心の一撃！" << endl;
			}
			else {
				acri = alpha->atk;
			}

			cout << "Betaは" << acri << "ダメージを受けた" << endl;

			cout << beta->hp;

			float bHp = 0;
			bHp = beta->hp -= acri;//betaのhpをalphaの攻撃力分引いていく

			if (bHp < 0) {//bHpが0を下回ったら
				bHp = 0;
			}

			cout << "→" << bHp << endl;

			cout << endl;

			if (bHp == 0) {//bHpが0なら
				cout << "決着！" << endl;
				cout << "Alphaの勝利！" << endl;
				break;
			}

		}
		
		{
			cout << "Betaのターン" << endl;
			cout << "Betaの攻撃！" << endl;

			random = rand() & 10;

			float bcri = 0;

			if (random == 0) {
				bcri = beta->atk * 2.5f;
				cout << "会心の一撃！" << endl;
			}
			else {
				bcri = beta->atk;
			}

			cout << "Alphaは" << bcri << "ダメージを受けた" << endl;
			cout << alpha->hp;

			float aHp = 0;
			aHp = alpha->hp -= bcri;//alphaのhpをbetaの攻撃力分引いていく

			if (aHp < 0) {//aHpが0を下回ったら
				aHp = 0;
			}

			cout << "→" << aHp << endl;

			cout << endl;


			if (aHp == 0) {//aHpが0なら
				cout << "決着！" << endl;
				cout << "Betaの勝利！" << endl;
				break;
			}

		}
	} while (true);//条件を満たしている限りループする

}