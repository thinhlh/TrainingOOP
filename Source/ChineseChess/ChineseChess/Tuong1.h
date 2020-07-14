#pragma once
#include "Si.h"
class Tuong1 :public ChessPiece
{
public:
	Tuong1(bool color, int x, int y)
	{
		this->color = color;
		this->x = x;
		this->y = y;
	}
	void Move()
	{
		cout << "Tuong " << ((color == true) ? "Trang" : "Den") << endl;
		cout << "Tuong: Di cheo 2 o (2 ngang va 2 doc) cho moi nuoc di. Tuong chi duoc phep o mot ben cua ban co, khong duoc di chuyen sang nua ban co cua doi phuong. Nuoc di cua tuong se khong hop le khi co mot quan co nam chan giua duong di." << endl;
	}
};