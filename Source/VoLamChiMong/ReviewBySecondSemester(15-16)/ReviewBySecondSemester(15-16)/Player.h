#pragma once
#include "ObjectClass.h"
class Player :public ObjectClass
{
private:
	bool Class; // true= 1 false= 2
public:
	Player() :ObjectClass()
	{
		Class = 1;
	}
	void Input()
	{
		cout << "Nhap cap do cua nguoi choi" << endl;
		cout << "Level= "; cin >> level;
		damage = level * 5;
		cout << "Nhap He cua nguoi choi" << endl;
		cout << "1 Neu la He Kim" << endl;
		cout << "2 Neu la He Moc" << endl;
		cout << "3 Neu la He Thuy" << endl;
		cout << "4 Neu la He Hoa" << endl;
		cout << "5 Neu la He Tho" << endl;
		cout << endl;
		cout << "Element= "; cin >> element;
		if (element != 1 && element != 2 && element != 3 && element != 4 && element != 5) element = 1;
		cout << "Nhap class cua nguoi choi" << endl << endl;
		int temp;
		switch (element)
		{
		case 1:
			cout << "Nhap 1 neu la Thieu Lam" << endl;
			cout << "Nhap 0 neu la Thien Long Vuong bang" << endl;
			break;
		case 2:
			cout << "Nhap 1 neu la Ngu Doc Giao" << endl;
			cout << "Nhap 0 neu la Duong Mon" << endl;
			break;
		case 3:
			cout << "Nhap 1 neu la Nga My" << endl;
			cout << "Nhap 0 neu la Thuy Yen Mon" << endl;
			break;
		case 4:
			cout << "Nhap 1 neu la Cai Bang" << endl;
			cout << "Nhap 0 neu la Thien Nhan giao" << endl;
			break;
		case 5: 
			cout << "Nhap 1 neu la Con Lon" << endl;
			cout << "Nhap 0 neu la Vo Dang" << endl;
			break;
		default:
			break;
		}
		cout << endl;
		cout << "Lua chon= "; cin >> temp;
		Class = (temp == 1) ? 1 : 0;
		cout << endl;
	}
	void Display()
	{
		cout << "Nhan vat: ";
		switch (element)
		{
		case 1: 
			if (Class == true) cout << "Thieu Lam, ";
			else cout << "Thien Vuong bang, ";
			cout << "thuoc he Kim" << endl;
			break;
		case 2:
			if (Class == true)cout << "Ngu Doc Giao, ";
			else cout << "Duong Mon, ";
			cout << "thuoc he Moc" << endl;
			break;
		case 3:
			if (Class == true)cout << "Nga My, ";
			else cout << "Thuy Yen Mon, ";
			cout << "thuoc he Thuy" << endl;
			break;
		case 4:
			if (Class == true) cout << "Cai Bang, ";
			else cout << "Thien Nhan Giao, ";
			cout << "thuoc he Hoa" << endl;
			break;
		case 5:
			if (Class == true) cout << "Con Lon, ";
			else cout << "Vo Dang, ";
			cout << "thuoc he Tho" << endl;
			break;
		default:
			break;
		}
		cout << "Hien tai dang o level: " << level<<endl;
	}
	int getDamage()
	{
		return damage;
	}
};