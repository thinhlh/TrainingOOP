#pragma once
#include "Ma.h"
class Phao :public ChessPiece
{
public:
	Phao(bool color, int x, int y)
	{
		this->color = color;
		this->x = x;
		this->y = y;
	}
	void Move()
	{
		cout << "Phao " << ((color == true) ? "Trang" : "Den") << endl;
		cout << "Phao: Di ngang va doc giong nhu xe. Diem khac biet la neu phao muon an qua, phao phai nhay qua dung 1 quan nao do. Khi khong an quan, tat ca nhung diem tu cho di den cho den phai khong co quan can" << endl;
	}
};