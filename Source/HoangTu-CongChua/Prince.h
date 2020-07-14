#pragma once
#include "Power.h"
class Prince
{
private:
	int money, iq, power;
public:
	Prince() 
	{
		money = iq = power = 0;
	}
	void Nhap()
	{
		cout << "Nhap so tien cua hoang tu: "; cin >> money;
		cout << "Nhap chi so IQ cua hoang tu: "; cin >> iq;
		cout << "Nhap chi so suc manh cua hoang tu: "; cin >> power;
	}
	int getMoney()
	{
		return money;
	}
	void setMoney(int _money)
	{
		money = _money;
	}
	int getIQ()
	{
		return iq;
	}
	int getPower()
	{
		return power;
	}
	void setPower(int _power)
	{
		power = _power;
	}
	
};