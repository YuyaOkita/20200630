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

void versus(FF_CHAR* alpha,FF_CHAR* beta) {//�|�C���^�ϐ�alpha�ƃ|�C���^�ϐ�beta�����
	int i = 0;

	do{
		
		 
		i++;

		cout << i << "�^�[����" << endl;
		cout << endl;
		
		cout << "Alpha�̃^�[��" << endl;
		cout << "Alpha�̍U���I" << endl;
		cout << "Beta��" << alpha->atk << "�_���[�W���󂯂�" << endl;
		cout << beta->hp;

		//int bHp = beta->hp -= alpha->atk;//beta��hp��alpha�̍U���͕������Ă���
		beta->hp -= alpha->atk;//beta��hp��alpha�̍U���͕������Ă���

		//int bHp = 0;

		if (beta->hp < 0) {//bHp��0�����������
			beta->hp = 0;
		}

		cout << "��" << beta->hp << endl;

		cout << endl;

		if (beta->hp == 0) {//bHp��0�Ȃ�
			cout << "�����I" << endl;
			cout << "Alpha�̏����I" << endl;
			break;
		}

		cout << "Beta�̃^�[��" << endl;
		cout << "Beta�̍U���I" << endl;
		cout << "Alpha��" << beta->atk << "�_���[�W���󂯂�" << endl;
		cout << alpha->hp;

		//int aHp = alpha->hp -= beta->atk;//alpha��hp��beta�̍U���͕������Ă���
		alpha->hp -= beta->atk;//alpha��hp��beta�̍U���͕������Ă���

		if (alpha->hp < 0) {//aHp��0�����������
			alpha->hp = 0;
		}

		 cout << "��" << alpha->hp << endl;

		cout << endl;


		if (alpha->hp == 0) {//d��0�Ȃ�
			cout << "�����I" << endl;
			cout << "Beta�̏����I" << endl;
			break;
		}
	
	} while (true);//�����𖞂����Ă�����胋�[�v����

}

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