#pragma once
#include "Tot.h"
class BanCo
{
private:
	ChessPiece *list[32];
public:
	BanCo()
	{
		list[0] = new Tuong(true, 1, 5);
		list[1] = new Si(true, 1, 4);
		list[2] = new Si(true, 1, 6);
		list[3] = new Tuong1(true, 1, 3);
		list[4] = new Tuong1(true, 1, 7);
		list[5] = new Ma(true, 1, 2);
		list[6] = new Ma(true, 1, 8);
		list[7] = new Xe(true, 1, 1);
		list[8] = new Xe(true, 1, 9);
		list[9] = new Phao(true,3, 2);
		list[10] = new Phao(true, 3, 8);
		list[11] = new Tot(true, 4, 1);
		list[12] = new Tot(true, 4, 3);
		list[13] = new Tot(true, 4, 5);
		list[14] = new Tot(true, 4, 7);
		list[15] = new Tot(true, 4, 9);
		list[16] = new Tuong(false, 10, 5);
		list[17] = new Si(false, 10, 4);
		list[18] = new Si(false, 10, 6);
		list[19] = new Tuong1(false, 10, 3);
		list[20] = new Tuong1(false, 10, 7);
		list[21] = new Ma(false, 10, 2);
		list[22] = new Ma(false, 10, 8);
		list[23] = new Xe(false, 10, 1);
		list[24] = new Xe(false, 10, 9);
		list[25] = new Phao(false, 8, 2);
		list[26] = new Phao(false, 8, 8);
		list[27] = new Tot(false, 7, 1);
		list[28] = new Tot(false, 7, 3);
		list[29] = new Tot(false, 7, 5);
		list[30] = new Tot(false, 7, 7);
		list[31] = new Tot(false, 7, 9);
	}
	void XuatCachDi()
	{
		int i;
		cout << "Nhap so thu tu cua quan: "; cin >> i;
		list[i]->Move();
	}
};