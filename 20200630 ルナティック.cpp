#include <iostream>
#include <ctime>
using namespace std;
#include "battle lunatic.h"




int main() {
	srand((unsigned int)time(NULL));


	FF_CHAR ffst[]{
		{"Alpha",rand() % 11 + 20,rand() % 3 + 3,2},//20�`30��11�̐��̒����烉���_���ɑI�ԁB+20��20�`30
		{"Beta",rand() % 11 + 20,rand() % 3 + 3,10}//3�`5��3�̐��̒����烉���_���ɑI�ԁB+3��3�`5
	};



	for (int i = 0; i < 2; i++) {
		cout << "NAME�@" << ffst[i].name << endl;
		cout << "HP�@" << ffst[i].hp << endl;
		cout << "�U���́@" << ffst[i].atk << endl;
		cout << "�h��́@" << ffst[i].def << endl;
		cout << endl;
	}

	versus(&ffst[0], &ffst[1]);//�|�C���^�ϐ�alpha��ffst[0]�̃A�h���X������B
	//�|�C���^�ϐ�beta��ffst[1]�̃A�h���X������
}