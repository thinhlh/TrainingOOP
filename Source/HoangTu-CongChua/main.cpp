#include "List.h"
int main()
{
	List list;
	list.Nhap();
	Prince HoangTu;
	HoangTu.Nhap();
	list.passAll(HoangTu);
}
