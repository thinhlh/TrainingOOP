#pragma once
#include"Monster.h"
class Object
{
private:
	ObjectClass *ClassType;
public:
	void Input()
	{
		cout << "Nhap 1 neu la Nhan Vat" << endl;
		cout << "Nhap 0 neu la Quai Vat" << endl;
		cout << "Lua chon: ";
		int temp;
		cin >> temp;
		if (temp == 1) ClassType = new Player;
		else ClassType = new Monster;
		ClassType->Input();
	}
	int getDamage()
	{
		return ClassType->getDamage();
	}
	int getElement()
	{
		return ClassType->getElement();
	}
	void Display()
	{
		ClassType->Display();
	}
};