#include <iostream>
#include <string>
#include <vector>
using namespace std;
class BloodType
{
protected:
	bool Rh; //true=+ false=-
	int type; // even= +, odd=- 0->7 // cai nay dung cho cau b va c
public:
	BloodType()
	{
		type = 0;
		Rh = false;
	}
	int getType()
	{
		return type;
	}
	virtual void Xuat() {}
};

class A :public BloodType
{
public:
	A(bool _Rh) :BloodType()
	{
		Rh = _Rh;
		if (Rh == false) type = 0;
		else type = 1;
	}
	void Xuat()
	{
		if (Rh == true) cout << "A+";
		else cout << "A-";
	}
};

class B :public BloodType
{
public:
	B(bool _Rh) :BloodType()
	{
		Rh = _Rh;
		if (Rh == false) type = 2;
		else type = 3;
	}
	void Xuat()
	{
		if (Rh == true) cout << "B+";
		else cout << "B-";
	}
};

class AB :public BloodType
{
public:
	AB(bool _Rh) :BloodType()
	{
		Rh = _Rh;
		if (Rh == false) type = 4;
		else type = 5;
	}
	void Xuat()
	{
		if (Rh == true) cout << "AB+";
		else cout << "AB-";
	}
};

class O :public BloodType
{
public:
	O(bool _Rh) :BloodType()
	{
		Rh = _Rh;
		if (Rh == false) type = 6;
		else type = 7;
	}
	void Xuat()
	{
		if (Rh == true) cout << "O+";
		else cout << "O-";
	}
};

class Person
{
private:
	BloodType* bloodtype;
public:
	Person()
	{
		bloodtype = new BloodType;
	}
	void Nhap()
	{
		string s;
		do
		{
			cout << " (A+, B-,...): ";
			cin >> s;
		} while (s.length() != 2 && s.length() != 3);
		if (s[0] == 'A')
		{
			if (s[1] == 'B')
			{
				if (s[2] == '+') bloodtype = new AB(true);
				else bloodtype = new AB(false);
			}
			else
			{
				if (s[1] == '+') bloodtype = new A(true);
				else bloodtype = new A(false);
			}
		}
		else if (s[0] == 'B')
		{
			if (s[1] == '+') bloodtype = new B(true);
			else bloodtype = new B(false);
		}
		else
		{
			if (s[1] == '+')bloodtype = new O(true);
			else bloodtype = new O(false);
		}
	}
	int getType()
	{
		return bloodtype->getType();
	}
	void Xuat()
	{
		bloodtype->Xuat();
		cout << endl;
	}
	bool isFamiliar(Person cha, Person me)
	{
		int father = cha.getType();
		int mother = me.getType();
		int child = getType();
		if ((((father == 0 || father == 1) && (mother == 0 || mother == 1)) || ((father == 6 || father == 7) && (mother == 0 || mother == 1)) || ((father == 0 || father == 1) && (mother == 6 || mother == 7))) && (child == 0 || child == 1 || child == 6 || child == 7)) return true; // TH con A va O
		else if ((((father == 2 || father == 3) && (mother == 2 || mother == 3)) || ((father == 6 || father == 7) && (mother == 2 || mother == 3)) || ((father == 2 || father == 3) && (mother == 6 || mother == 7))) && (child == 2 || child == 3 || child == 6 || child == 7)) return true; //TH con B va O
		else if ((father == 4 || father == 5) && (mother < 6) || (mother == 4 || mother == 5) && (father < 6) && (child < 6)) return true; // TH con A,B hoac AB
		else if ((((father == 6 || father == 7) && (mother == 4 || mother == 5)) || ((father == 4 || father == 5) && (mother == 6 || mother == 7))) && (child == 0 || child == 1 || child == 2 || child == 3)) return true; // TH con A hoac B
		else if ((father == 6 || father == 7) && (mother == 6 || mother == 7) && (child == 6 || child == 7)) return true; //TH con O
		else if ((father == 0 || father == 1) && (mother == 2 || mother == 3) || (father == 2 || father == 3) && (mother == 0 || mother == 1)) return true; //TH cha me A hoac B
		else return false;
	}
};

class List
{
private:
	int n;
	Person *list;
public:
	void Nhap()
	{
		cout << "Nhap so luong nguoi trong nhom: ";
		cin >> n;
		list = new Person[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap nhom mau cua nguoi thu " << i + 1;
			list[i].Nhap();
			cout << endl;
		}
	}
	void Xuat()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Nhom mau nguoi thu " << i + 1 << ": ";
			list[i].Xuat();
		}
	}
	void HienMau()
	{
		int index;
		do
		{
			cout << "Nhap so thu tu nguoi duoc hien mau trong danh sach: ";
			cin >> index;
		} while (index <= 0 || index > n);
		index--;
		std::vector<int> danhsachHienMau;
		for (int i = 0; i < n; i++)
		{
			if (i != index)
			{
				int temp = list[i].getType();
				switch (list[index].getType())
				{

				case 0: //A-
					if (temp == 0 || temp == 6) danhsachHienMau.push_back(i);
					break;
				case 1: //A+
					if (temp == 0 || temp == 1 || temp == 6 || temp == 7) danhsachHienMau.push_back(i);
					break;
				case 2: //B-
					if (temp == 6 || temp == 2) danhsachHienMau.push_back(i);
					break;
				case 3://B+
					if (temp == 6 || temp == 7 || temp == 2 || temp == 3) danhsachHienMau.push_back(i);
					break;
				case 4: //AB-
					if (temp == 0 || temp == 2 || temp == 4 || temp == 6) danhsachHienMau.push_back(i);
					break;
				case 5://AB+
					danhsachHienMau.push_back(i);
					break;
				case 6: //O-
					if (temp == 6) danhsachHienMau.push_back(i);
					break;
				case 7:// O+
					if (temp == 6 || temp == 7) danhsachHienMau.push_back(i);
					break;
				}
			}
		}
		for (int i = 0; i < danhsachHienMau.size(); i++)
		{
			cout << "Nhung nguoi hien mau duoc la nguoi thu " << danhsachHienMau[i] + 1 << " co nhom mau la: ";
			list[danhsachHienMau[i]].Xuat();
			cout << endl;
		}
		if (danhsachHienMau.size() == 0) cout << "Khong co nguoi co the hien mau" << endl;
	}
};
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	List list;
	list.Nhap();
	list.Xuat();
	Person cha, me, con;
	cout << "Nhap nhom mau nguoi cha"; cha.Nhap();
	cout << "Nhap nhom mau nguoi me"; me.Nhap();
	cout << "Nhap nhom mau nguoi con"; con.Nhap();
	if (con.isFamiliar(cha, me)) cout << "Con cua cha me" << endl;
	else cout << "Khong phai con cua cha me" << endl;
	list.HienMau();
}
