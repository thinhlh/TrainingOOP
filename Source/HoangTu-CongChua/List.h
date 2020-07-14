#pragma once
#include "Object.h"
class List
{
private:
	int n;
	Object *list;
public:
	List()
	{
		n = 1;
		list = new Object;
	}
	int getN()
	{
		return n;
	}
	void Nhap()
	{
		cout << "Nhap so luong cong n= "; cin >> n;
		list = new Object[n];
		for (int i = 0; i < n; i++)
		{
			list[i].Nhap();
		}
	}
	void passAll(Prince &prince)
	{
		bool temp=true;
		for(int i=0;i<n;i++)
			if (list[i].isPass(prince) == false) 
			{
				temp = false;
				break;
			}
		if (temp == true) cout << "Hoang tu cuu duoc cong chua";
		else cout << "Hoang tu khong cuu duoc cong chua";
		cout << endl;
		cout << "So tien con lai: " << prince.getMoney() << endl;
		cout << "Suc manh con lai: " << prince.getPower() << endl;
		cout << "IQ: " << prince.getIQ() << endl;
	}
};