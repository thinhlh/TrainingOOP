#pragma once
#include "Object.h"
class Manage
{
private:
	Object *list;
	int n;
public:
	void Input()
	{
		cout << "Nhap so luong nguoi choi va quai vat: ";
		cin >> n;
		cout << endl;
		list = new Object[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap thong tin doi tuong thu " << i + 1 << endl;
			list[i].Input();
			cout << endl;
		}
	}
	void MaxDamageDealer()
	{
		int max=list[0].getDamage(),i;
		int maxIndex = 0;
		for(i=1;i<n;i++)
			if (list[i].getDamage() > max)
			{
				max = list[i].getDamage();
				maxIndex = i;
			}
		cout << "Phan tu co muc sat thuong cao nhat" << endl;
		list[maxIndex].Display();
		cout << "Voi muc sat thuong= "<< list[maxIndex].getDamage() << endl;
	}
	void DisplayDealDamage(int a,int b)
	{
		cout << "Doi tuong A gay "<<a<< " len doi tuong B va doi tuong B gay "<<b<< " len doi tuong A" << endl;
	}
	void Compare2Object()
	{
		int a, b;
		do
		{
			cout << "Nhap so thu tu cua doi tuong A: "; cin >> a;
			a--;
		} while (a<0||a >=n);
		do
		{
			cout << "Nhap so thu tu cua doi tuong B: "; cin >> b;
			b--;
		} while (b < 0 || b >= n);
		int eleA = list[a].getElement();
		int eleB = list[b].getElement();
		int damA = list[a].getDamage();
		int damB = list[b].getDamage();
		if (eleA == 1)
		{
			if (eleB == 1) DisplayDealDamage(damA, damB);
			else if (eleB == 2) DisplayDealDamage(damA + damA / 5, damB - damB / 5);
			else if (eleB == 3)DisplayDealDamage(damA + damA / 10, damB);
			else if (eleB == 4)DisplayDealDamage(damA - damA / 5, damB + damB / 5);
			else DisplayDealDamage(damA, damB + damB / 10);
		}
		else if (eleA==2)
		{
			if (eleB == 1)DisplayDealDamage(damA - damA / 5, damB + damB / 5);
			else if (eleB == 2)DisplayDealDamage(damA, damB);
			else if (eleB == 3)DisplayDealDamage(damA, damB + damB / 10);
			else if (eleB == 4)DisplayDealDamage(damA + damA / 10,damB);
			else DisplayDealDamage(damA + damA / 5, damB - damB / 5);
		}
		else if (eleA == 3)
		{
			if (eleB == 1)DisplayDealDamage(damA, damB + damB / 10);
			else if (eleB == 2)DisplayDealDamage(damA + damA / 10, damB);
			else if (eleB == 3)DisplayDealDamage(damA, damB);
			else if (eleB == 4)DisplayDealDamage(damA + damA / 5, damB - damB / 5);
			else DisplayDealDamage(damA - damA / 5, damB + damB / 5);
		}
		else if (eleA == 4)
		{
			if (eleB == 1)DisplayDealDamage(damA + damA / 5, damB - damB / 5);
			else if (eleB == 2)DisplayDealDamage(damA, damB + damB / 10);
			else if (eleB == 3)DisplayDealDamage(damA - damA / 5, damB + damB / 5);
			else if (eleB == 4)DisplayDealDamage(damA, damB);
			else DisplayDealDamage(damA + damA / 10, damB);
		}
		else
		{
			if (eleB == 1)DisplayDealDamage(damA + damA / 10, damB);
			else if (eleB == 2)DisplayDealDamage(damA - damA / 5, damB + damB / 5);
			else if (eleB == 3)DisplayDealDamage(damA + damA / 5, damB - damB / 5);
			else if (eleB == 4)DisplayDealDamage(damA, damB + damB / 10);
			else DisplayDealDamage(damA, damB);
		}
		cout << endl;
	}
	void Display()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Thong tin doi tuong thu " << i + 1 << endl;
			list[i].Display();
		}
	}
};