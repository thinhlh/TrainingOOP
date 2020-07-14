#pragma once
#include <iostream>
using namespace std;
class ChessPiece
{
protected:
	int x, y;
	bool color; //white=true black=false
public:
	ChessPiece()
	{
		x = y = 1;
		color = true;
	}
	virtual void Move(){}
};