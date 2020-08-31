#include <iostream>
#include <ctime>
using namespace std;

struct FF_CHAR {
	int hp;
	int atk;
	int def;
};

int main() {
	srand((unsigned int)time(NULL));


	FF_CHAR ffst[]{
		{rand() % 11 + 20,rand() % 3 + 3,2},//20～30で11個の数の中からランダムに選ぶ。+20で20～30
		{rand() % 11 + 20,rand() % 3 + 3,10}
	};
	
	for (int i = 0; i < 2; i++) {
		cout << "HP　" << ffst[i].hp << endl;
		cout << "攻撃力　" << ffst[i].atk << endl;
		cout << "防御力　" << ffst[i].def << endl;
		cout << endl;
	}


}