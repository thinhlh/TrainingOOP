#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
class Tho
{
protected:
	int socau; //so cau
	string *tho; // bai tho bao gom 1 mang chu cai => 1 cau va 1 mang con tro => so cau 
	string **tieng;
public:
	void Nhap()
	{
		do
		{
			cout << "Nhap so cau cua bai tho: ";
			cin >> socau;
		} while (socau % 2 != 0 || socau <= 0);
		tho = new string[socau];
		cout << "Nhap bai tho" << endl;
		cin.ignore();
		for (int i = 0; i < socau; i++)
			getline(cin, tho[i]);
		getTieng();
	}
	int ktgieovan(char a[], char b[])
	{
		srand(time(NULL));
		return rand() % 2;
	}
	char* tochar(string tu)
	{
		char *result = new char[tu.length()];
		for (int i = 0; i < tu.length(); i++)
			result[i] = tu[i];
		return result;
	}
	void getTieng()
	{
		tieng = new string*[socau];
		string temp="";
		for (int cau = 0; cau < socau; cau++)
		{
			tieng[cau] = new string[8];
			int count = 0;
			for (int i = 0; i < tho[cau].length(); i++)
			{
				while (tho[cau][i] != ' '&&i < tho[cau].length())
				{
					temp += tho[cau][i];
					i++;
				}
				tieng[cau][count].assign(temp);
				count++;
				temp.clear();
			}
		}
	}
	int getSoCau()
	{
		return socau;
	}
	virtual bool kt_van()
	{
		return true;
	}
	void Xuat()
	{
		for (int i = 0; i < socau; i++)
			cout << tho[i] << endl;
	}
};