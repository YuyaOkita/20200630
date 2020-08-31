#include <iostream>
using namespace std;
#include "battle difficult.h"


void versus(FF_CHAR* alpha, FF_CHAR* beta) {//ポインタ変数alphaとポインタ変数betaを作る
	int i = 0;

	do {


		i++;

		cout << i << "ターン目" << endl;
		cout << endl;

		cout << "Alphaのターン" << endl;
		cout << "Alphaの攻撃！" << endl;
		cout << "Betaは" << alpha->atk << "ダメージを受けた" << endl;
		cout << beta->hp;

		int bHp = beta->hp -= alpha->atk;//betaのhpをalphaの攻撃力分引いていく

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

		cout << "Betaのターン" << endl;
		cout << "Betaの攻撃！" << endl;
		cout << "Alphaは" << beta->atk << "ダメージを受けた" << endl;
		cout << alpha->hp;

		int aHp = alpha->hp -= beta->atk;//alphaのhpをbetaの攻撃力分引いていく

		if (aHp < 0) {//aHpが0を下回ったら
			aHp = 0;
		}

		cout << "→" << aHp << endl;

		cout << endl;


		if (aHp == 0) {//dが0なら
			cout << "決着！" << endl;
			cout << "Betaの勝利！" << endl;
			break;
		}

	} while (true);//条件を満たしている限りループする

}