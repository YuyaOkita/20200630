#include <iostream>
using namespace std;
#include "battle lunatic.h"


void versus(FF_CHAR* alpha, FF_CHAR* beta) {//�|�C���^�ϐ�alpha�ƃ|�C���^�ϐ�beta�����
	int i = 0;

	do {

		int random = 0;

		
		i++;
		cout << i << "�^�[����" << endl;
		cout << endl;

		{

			cout << "Alpha�̃^�[��" << endl;
			cout << "Alpha�̍U���I" << endl;

			random = rand() % 10;//0�`9�̃����_����10�̐�����10����1
			float acri = 0;

			if (random == 0) {
				acri = alpha->atk * 2.5f;

				cout << "��S�̈ꌂ�I" << endl;
			}
			else {
				acri = alpha->atk;
			}

			cout << "Beta��" << acri << "�_���[�W���󂯂�" << endl;

			cout << beta->hp;

			float bHp = 0;
			bHp = beta->hp -= acri;//beta��hp��alpha�̍U���͕������Ă���

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

		}
		
		{
			cout << "Beta�̃^�[��" << endl;
			cout << "Beta�̍U���I" << endl;

			random = rand() & 10;

			float bcri = 0;

			if (random == 0) {
				bcri = beta->atk * 2.5f;
				cout << "��S�̈ꌂ�I" << endl;
			}
			else {
				bcri = beta->atk;
			}

			cout << "Alpha��" << bcri << "�_���[�W���󂯂�" << endl;
			cout << alpha->hp;

			float aHp = 0;
			aHp = alpha->hp -= bcri;//alpha��hp��beta�̍U���͕������Ă���

			if (aHp < 0) {//aHp��0�����������
				aHp = 0;
			}

			cout << "��" << aHp << endl;

			cout << endl;


			if (aHp == 0) {//aHp��0�Ȃ�
				cout << "�����I" << endl;
				cout << "Beta�̏����I" << endl;
				break;
			}

		}
	} while (true);//�����𖞂����Ă�����胋�[�v����

}