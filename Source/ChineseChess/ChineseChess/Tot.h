#pragma once
#include "Phao.h"
class Tot :public ChessPiece
{
public:
	Tot(bool color, int x, int y)
	{
		this->color = color;
		this->x = x;
		this->y = y;
	}
	void Move()
	{
		cout << "Tot " << ((color == true) ? "Trang" : "Den") << endl;
		cout << "Tot: di mot o moi nuoc, Neu tot chua vuot qua song no chi co the di thang tien. Khi da vuot song roi, tot co the di ngang 1 nuoc hay di thang tien 1 buoc moi nuoc" << endl;
	}
};