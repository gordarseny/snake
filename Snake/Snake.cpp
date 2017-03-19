#include "stdafx.h"

class point
{
	//Объявление переменных вида PUBLIC, нужно для того, чтобы были годны для всего проекта
public: 
	int x;
	int y;
	char symbol;

	void gotoXY(int x, int y)
{
	COORD cd;
	cd.X = x;
	cd.Y = y;
	//Установление курсора по координатам
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);

}

	//Рисование знака
	void Draw()
{
		cout << symbol << endl;
}
};


int main()
{
	setlocale(LC_ALL, "rus");

	//Определения класса в котором происходят действия
	point p1;
	p1.x = 7;
	p1.y = 2;
	p1.symbol = '&';

	//подключение к функциям из класса POINT
	p1.gotoXY(p1.x, p1.y);
	p1.Draw();
	
	//Определения класса в котором происходят действия
	point p2;
	p2.x = 2;
	p2.y = 5;
	p2.symbol = '~';

	//подключение к функциям из класса POINT
	p2.gotoXY(p2.x, p2.y);
	p2.Draw();

	system("pause");
    return 0;
}




