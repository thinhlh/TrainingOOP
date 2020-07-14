#pragma once
#include "Business.h"
class Academic :public Gate
{
private:
	int iq;
public:
	Academic() :Gate()
	{
		iq = 0;
	}
	void Nhap()
	{
		cout << "Nhap tri tue cau hoi ma nha hien triet dua ra: ";
		cin >> iq;
	}
	int getType()
	{
		return 2;
	}
	int getProp()
	{
		return iq;
	}
};