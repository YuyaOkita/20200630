#include <iostream>
using namespace std;
#include "battle difficult.h"


void versus(FF_CHAR* alpha, FF_CHAR* beta) {//�|�C���^�ϐ�alpha�ƃ|�C���^�ϐ�beta�����
	int i = 0;

	do {


		i++;

		cout << i << "�^�[����" << endl;
		cout << endl;

		cout << "Alpha�̃^�[��" << endl;
		cout << "Alpha�̍U���I" << endl;
		cout << "Beta��" << alpha->atk << "�_���[�W���󂯂�" << endl;
		cout << beta->hp;

		int bHp = beta->hp -= alpha->atk;//beta��hp��alpha�̍U���͕������Ă���

		if (bHp < 0) {//bHp��0�����������
			bHp = 0;
		}

		cout << "��" << bHp << endl;

		cout << endl;

		if (bHp == 0) {//bHp��0�Ȃ�
			cout << "�����I" << endl;
			cout << "Alpha�̏����I" << endl;
			break;
		}

		cout << "Beta�̃^�[��" << endl;
		cout << "Beta�̍U���I" << endl;
		cout << "Alpha��" << beta->atk << "�_���[�W���󂯂�" << endl;
		cout << alpha->hp;

		int aHp = alpha->hp -= beta->atk;//alpha��hp��beta�̍U���͕������Ă���

		if (aHp < 0) {//aHp��0�����������
			aHp = 0;
		}

		cout << "��" << aHp << endl;

		cout << endl;


		if (aHp == 0) {//d��0�Ȃ�
			cout << "�����I" << endl;
			cout << "Beta�̏����I" << endl;
			break;
		}

	} while (true);//�����𖞂����Ă�����胋�[�v����

}