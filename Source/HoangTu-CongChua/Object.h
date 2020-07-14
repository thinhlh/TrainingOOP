#pragma once
#include "Prince.h"
class Object
{
private:
	Gate *gate;
public:
	Object()
	{
		gate = new Gate;
	}
	void Nhap()
	{
		cout << "Nhap 1 neu la cong Giao thuong" << endl;
		cout << "Nhap 2 nue la cong Hoc thuat" << endl;
		cout << "Nhap 3 neu la cong Suc manh" << endl;
		int temp;
		cout << "Lua chon: "; cin >> temp;
		if (temp != 1 && temp != 2 && temp != 3) temp = 1;
		if (temp == 1)
		{
			gate = new Business;
			gate->Nhap();
		}
		else if (temp == 2)
		{
			gate = new Academic;
			gate->Nhap();
		}
		else if (temp == 3)
		{
			gate = new Power;
			gate->Nhap();
		}
	}
	bool isPass(Prince &prince)
	{
		switch (gate->getType())
		{
		case 1:
			if (prince.getMoney() >= gate->getProp())
			{
				prince.setMoney (prince.getMoney()- gate->getProp());
				return true;
			}
			else
			{
				prince.setMoney(0);
				return false;
			}
			break;
		case 2:
			if (prince.getIQ() >= gate->getProp()) return true;
			else return false;
			break;
		case 3:
			if (prince.getPower() >= gate->getProp())
			{
				prince.setPower(prince.getPower()-gate->getProp());
				return true;
			}
			else
			{
				prince.setPower(0);
				return false;
			}
			break;
		default:
			break;
		}
		cout << endl;
	}

};