#include <iostream>
#include <vector>
using namespace std;
class Gate
{
public:
	virtual void Nhap(){}
	virtual void Xuat(){}
	virtual int getProp() { return 0; }
	virtual int getType() { return 0; }
};