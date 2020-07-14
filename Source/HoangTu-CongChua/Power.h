#pragma once
#include"Academic.h"
class Power :public Gate
{
private:
	int power;
public:
	Power() :Gate()
	{
		power = 0;
	}
	void Nhap()
	{
		cout << "Nhap chi so suc manh cua dung sy: "; cin >> power;
	}
	int getType()
	{
		return 3;
	}
	int getProp()
	{
		return power;
	}
};