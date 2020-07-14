#pragma once
#include "Tuong.h"
class Si :public ChessPiece
{
public:
	Si(bool color, int x, int y)
	{
		this->color = color;
		this->x = x;
		this->y = y;
	}
	void Move()
	{
		cout << "Si " << ((color == true) ? "Trang" : "Den") << endl;
		cout << "Si: Di xeo 1 o moi nuoc. Si luon luon phai o trong cung tuong" << endl;
	}
};