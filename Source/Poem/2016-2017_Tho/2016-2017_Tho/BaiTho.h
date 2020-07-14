#pragma once
#include "ThatNgonBatCu.h"
class BaiTho
{
private:
	Tho* baitho;
public:
	void Nhap()
	{
		//baitho = new Tho;
		cout << "Nhap 1 neu la tho Luc Bat" << endl;
		cout << "Nhap 2 neu la tho Song That Luc Bat" << endl;
		cout << "Nhap 3 neu la tho That Ngon Bat Cu Duong Luat" << endl;
		cout << "Lua chon: ";
		int temp; cin >> temp;
		if (temp != 1 && temp != 2 && temp != 3) temp = 1;
		if (temp == 1) baitho = new LucBat;
		else if (temp == 2) baitho = new SongThatLucBat;
		else baitho = new ThatNgonBatCu;
		baitho->Nhap();
	}
	int getSoCau()
	{
		return baitho->getSoCau();
	}
	void Xuat()
	{
		baitho->Xuat();
	}
	bool check()
	{
		return baitho->kt_van();
	}
};