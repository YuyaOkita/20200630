#include <iostream>
#include <ctime>
using namespace std;

const int MAX_NAME = 5;

struct FF_CHAR {
	char name [MAX_NAME + 1];
	int hp;
	int atk;
	int def;
};

void versus(FF_CHAR* alpha,FF_CHAR* beta) {//ポインタ変数alphaとポインタ変数betaを作る
	int i = 0;

	do{
		
		 
		i++;

		cout << i << "ターン目" << endl;
		cout << endl;
		
		cout << "Alphaのターン" << endl;
		cout << "Alphaの攻撃！" << endl;
		cout << "Betaは" << alpha->atk << "ダメージを受けた" << endl;
		cout << beta->hp;

		//int bHp = beta->hp -= alpha->atk;//betaのhpをalphaの攻撃力分引いていく
		beta->hp -= alpha->atk;//betaのhpをalphaの攻撃力分引いていく

		//int bHp = 0;

		if (beta->hp < 0) {//bHpが0を下回ったら
			beta->hp = 0;
		}

		cout << "→" << beta->hp << endl;

		cout << endl;

		if (beta->hp == 0) {//bHpが0なら
			cout << "決着！" << endl;
			cout << "Alphaの勝利！" << endl;
			break;
		}

		cout << "Betaのターン" << endl;
		cout << "Betaの攻撃！" << endl;
		cout << "Alphaは" << beta->atk << "ダメージを受けた" << endl;
		cout << alpha->hp;

		//int aHp = alpha->hp -= beta->atk;//alphaのhpをbetaの攻撃力分引いていく
		alpha->hp -= beta->atk;//alphaのhpをbetaの攻撃力分引いていく

		if (alpha->hp < 0) {//aHpが0を下回ったら
			alpha->hp = 0;
		}

		 cout << "→" << alpha->hp << endl;

		cout << endl;


		if (alpha->hp == 0) {//dが0なら
			cout << "決着！" << endl;
			cout << "Betaの勝利！" << endl;
			break;
		}
	
	} while (true);//条件を満たしている限りループする

}

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