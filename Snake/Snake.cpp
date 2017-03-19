#include "stdafx.h"

static void gotoXY(int x, int y)
{
	COORD cd;

	cd.X = x;
	cd.Y = y;
	//Установление курсора по координатам
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
}

static void Draw(char symbol)
{
	cout << symbol << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int x1 = 2;
	int y1 = 4;
	char symbol1 = '&';

	gotoXY(x1, y1);
	Draw(symbol1);

	int x2 = 5;
	int y2 = 7;
	char symbol2 = '~';

	gotoXY(x2, y2);
    Draw(symbol2);


	system("pause");
    return 0;
}



