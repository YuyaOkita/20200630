#pragma once//宣言をヘッダーファイルにかく

const int MAX_NAME = 5;

struct FF_CHAR {
	char name[MAX_NAME + 1];
	int hp;
	int atk;
	int def;
};

void versus(FF_CHAR* alpha, FF_CHAR* beta);

