#pragma once
#include "Tuong1.h"
class Xe :public ChessPiece
{
public:
	Xe(bool color, int x, int y)
	{
		this->color = color;
		this->x = x;
		this->y = y;
	}
	void Move()
	{
		cout << "Xe " << ((color == true) ? "Trang" : "Den") << endl;
		cout << "Xe: Di ngang hay doc tren ban co mien la dung bi quan khac can duong tu diem di den diem de" << endl;
	}
};