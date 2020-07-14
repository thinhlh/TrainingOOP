#pragma once
#include "Player.h"
class Monster :public ObjectClass
{
private:
	bool type; //0= normal 1=boss
public:
	Monster() :ObjectClass()
	{
		type = 0;
	}
	void Input()
	{
		cout << "Nhap cap do cua quai vat" << endl;
		cout << "Level= "; cin >> level;
		cout << endl;
		cout << "Nhap 0 neu la thong thuong"<<endl<<"Nhap 1 neu la dau linh" << endl;
		int temp;
		cout << "Lua chon: "; cin >> temp;
		type = (temp == 1) ? 1 : 0;
		damage = level * ((type == true) ? 7 : 3);
		cout << "Nhap he cua quai vat" << endl;
		cout << "1 Neu la He Kim" << endl;
		cout << "2 Neu la He Moc" << endl;
		cout << "3 Neu la He Thuy" << endl;
		cout << "4 Neu la He Hoa" << endl;
		cout << "5 Neu la He Tho" << endl;
		cout << endl;
		cout << "Element= "; cin >> element;
		if (element != 1 && element != 2 && element != 3 && element != 4 && element != 5) element = 1;
	}
	void Display()
	{
		if (type == true) cout << "Quai vat la Dau Linh, thuoc he: ";
		else cout << "Quai vat la Thong Thuong, thuoc he: ";
		if (element == 1) cout << "Kim";
		else if (element == 2) cout << "Moc";
		else if (element == 3)cout << "Thuy";
		else if (element == 4)cout << "Hoa";
		else if (element == 5)cout << "Tho";
		cout << endl;
	}
	int getDamage()
	{
		return damage;
	}
};