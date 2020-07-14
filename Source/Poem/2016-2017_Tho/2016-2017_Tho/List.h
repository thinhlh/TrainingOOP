#pragma once
#include "BaiTho.h"
class List
{
private:
	int n;
	BaiTho* list;
public:
	List()
	{
		n = 1;
		list = new BaiTho;
	}
	void Nhap()
	{
		cout << "Nhap so bai tho: ";
		cin >> n;
		list = new BaiTho[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap bai tho thu " << i + 1 << endl;
			list[i].Nhap();
			cout << endl;
		}
	}
	void BaiThoDaiNhat()
	{
		int index = 0;
		int max = 0;
		for (int i = 0; i < n; i++)
			if (list[i].getSoCau() > max)
			{
				max = list[i].getSoCau();
				index = i;
			}
		cout << "Bai tho dai nhat" << endl;
		list[index].Xuat();
	}
	void check()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Bai tho thu " << i + 1 << ": ";
			if (list[i].check() == true) cout << "Dung luat" << endl;
			else cout << "Sai luat" << endl;
		}
	}
};