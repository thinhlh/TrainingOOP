#pragma once
#include"Gate.h"
class Business :public Gate
{
private:
	int amount;
	int price;
	int fee;
public:
	Business() :Gate()
	{
		amount=	price=fee = 0;
	}
	void Nhap()
	{
		cout << "Nhap thong tin cua ten lai buon" << endl;
		cout << "Nhap so hang= "; cin >> amount;
		cout << "Nhap don gia= "; cin >> price;
		fee = amount * price;
	}
	int getType()
	{
		return 1;
	}
	int getProp()
	{
		return fee;
	}
};