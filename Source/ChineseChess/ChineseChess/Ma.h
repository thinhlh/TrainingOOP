#pragma once
#include "Xe.h"
class Ma :public ChessPiece
{
public:
	Ma(bool color, int x, int y)
	{
		this->color = color;
		this->x = x;
		this->y = y;
	}
	void Move()
	{
		cout << "Ma " << ((color == true) ? "Trang" : "Den") << endl;
		cout << "Ma: Di ngang 2 o va doc 1 o (hay doc 2 o va ngang 1 o) cho moi nuoc di. Neu co quan nam ngay ben canh ma va can duong ngang 2( hay duong doc 2), ma bi can khong duoc di duong do." << endl;

	}
};