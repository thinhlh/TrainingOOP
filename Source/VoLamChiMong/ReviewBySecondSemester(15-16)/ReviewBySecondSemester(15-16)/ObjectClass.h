#pragma once
#include <iostream>
using namespace std;
class ObjectClass // object could be a player a monster
{
protected:
	int level;
	int element; // 1=Metal 2=Earth 3=Water 4=Fire 5=Wood
	int damage;
public:
	ObjectClass()
	{
		level = 1;
		element = 1;
		damage = 0;
	}
	virtual int getDamage() 
	{
		return 0; 
	}
	int getElement() 
	{
		return element; 
	}
	virtual void Input() {};
	virtual void Display() {};
};