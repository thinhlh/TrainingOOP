#include <iostream>
using namespace std;
class Personality
{
protected:
	int percentage;
public:
	Personality()
	{
		percentage=0;
	}	
	void setPercentage(int _percentage);
	virtual void Xuat()=0;
	int getPercentage();
}

void Personality::setPercentage(int _percentage)
{
	percentage=_percentage;
}
void Personality::getPercentage()
{
	return percentage; 
}
class Openess:public Personality
{
public:
	Openess():Personality(){}
	void Xuat();
}
void Openess::Xuat()
{
	cout<<"O: "<<percentage<<"%"<<endl;
	if(percentage>=70) cout<<"Nguoi co diem cao o yeu to nay thuong thich nhung y tuonng moi, thich hieu biet nhieu linh vuc nhung dong thoi cung thich tu do, khong thich rang buoc.";
	else if(percentage<=30) cout<<"Nguoi co diem thap o yeu to nay thuong kha bao thu, kho tiep nhan nhung y tuong moim ka. Ho thich su on dinh quen thuoc va thuc te.";
	else cout<<"Khong xac dinh ro.";
	cout<<endl;
}
class Coscienctiousness:public Personality
{
public:
	Coscienctiousness():Personality()
	void Xuat();
}
void Coscienctiousness::Xuat()
{
	cout<<"C: "<<percentage<<"%"<<endl;
	if(percentage>=70) cou <<"Nguoi co diem cao o yeu to nay thuong la nguoi cham chi, co kha nang chiu ap uc tot. Ho thuong la nguoi gan bo, trung thanh voi toc chuc.";
	else if(percentage<=30) cout<<"Nguoi co diem thap o yeu to nay thuong de bo cuoc, kha nang chiu ap luc, tuan thu ky luat cua to chuc kem.";
	else cout<<"Khong xac dinh ro.";
	cout<<endl;
}
class Extraversion:public Personality
{
public:
	Extraversion():Personality()
	void Xuat();
}
void Extraversion::Xuat()
{
	cout<<"E: "<<percentage<<"%"<<endl;
	if(percentage>=70) cout<<"Nguoi co diem cao o yeu to nay thuong la nguoi nhiet tinh, nang dong, giao tiep tot, thich the hien ban than.";
	else if(percentage<=30) cout<<"Nguoi co diem thap o yeu to nay thuong ngai giao tiep, khong thich su noi batm thich duoc lam viec doc lap.";
	else cout<<"Khong xac dinh ro.";
	cout<<endl;
}
class Agreeableness:public Personality
{
public:
	Agreeableness():Personality()
	void Xuat();
}
void Agreeableness::Xuat()
{
	cout<<"A: "<<percentage<<"%"<<endl;
	if(percentage>=70) cout<<"Nguoi co diem cao o yeu to nay thuong than thien, coi mo, dong cam voi moi nguoi nhung nhieu khi\"thieu chinh kien\"";
	else if(percentage<=30) cout<<"Nguoi co diem thap thuong dat loi ich cua ban than len trenm it dong cam, chia se voi dong nghiep, co tinh canh tranh cao.";
	else cout<<"Khong xac dinh ro.";
	cout<<endl;
}
class Neuroticism:public Personality
{
public:
	Neuroticism():Personality()
	void Xuat();
}
void Neuroticism::Xuat()
{
	cout<<"N: "<<percentage<<"%"<<endl;
	if(percentage>=70) cout<<"Nguoi co diem cao o yeu to nay thuong co cac cam xuc tieu cuc nhu: lo lang, buc boi, tu ti, yeu duoi va kha nang chiu ap luc kem.";
	else if(percentage<=30) cout<<"Nguoi co diem thap o yeu to nay thuong kiem soat duoc cam xuc, ung pho voi can thang tot, it bi ben ngoai anh huong de tam trang cua ban than.";
	else cout<<"Khong xac dinh ro.";
	cout<<endl;
}
class Person
{
private: 
	Personality *personality[5];
public:
	Person()
	{
		personality[0]=new Openess;
		personality[1]=new Coscienctiousness;
		personality[2]=new Extraversion;
		personality[3]=new Agreeableness;
		personality[4]=new Neuroticism;
	}
	void Nhap(string s)
	void Xuat();
}
void Person::Nhap(string s)
{
	int count=0;
	string temp="";
	for(int i=1;i<s.length();i++)
	{
		while(s[i]!='-'&&i<s.length())
		{
			temp+=s[i];
			i++;
		}
		personality[count]->setPercentage(stoi(temp));
		i++;
		count++;
	}
}
void Person::Xuat()
{
	for(int i=0;i<5;i++)
		personality[i]->Xuat();
}
class  List
{
private:
	int n;
	Person *list
public:
	 List()
	 {
	 	n=1;
	 	list=new Person;
	 }
	void Nhap();
	void Xuat();
};
void List::Nhap()
{
	cout<<"Nhap so luong nhan vien trong danh sach: ";
	cin>>n;
	list=new Person[n];
	string temp;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap ket qua kiem tra cua nhan vien thu "<<i+1<<": ";
		cin>>temp;
		list[i]->Nhap(temp);
		cout<<endl;
	}
}
void List::Xuat()
{
	for(int i=0;i<n;i++)
	{
		cout<<"Ket qua kiem tra cua nhan vien thu "<<i+1<<endl;
		list[i]->Xuat();
	}
}
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	List list;
	list->Nhap();
	list->Xuat();
	return 0;
}
