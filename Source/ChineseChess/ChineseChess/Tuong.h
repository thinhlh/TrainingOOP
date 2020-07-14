#pragma once
#include "ChessPiece.h"
class Tuong:public ChessPiece
{
public:
	Tuong(bool color, int x, int y)
	{
		this->color = color;
		this->x = x;
		this->y = y;
	}
	void Move()
	{
		cout << "Tuong " << ((color == true) ? "Trang" : "Den") << endl;
		cout << "Tuong: Di tung o mot, di ngang hoac doc. Tuong luon luon phai o trong pham vi cung va khong duoc ra ngoai. Cung tuc la hinh vuong 2X2 duoc danh dau cheo hinh chu X " << endl;
	}
};