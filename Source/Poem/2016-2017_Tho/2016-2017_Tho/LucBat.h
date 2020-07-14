#pragma once
#include "Tho.h"
class LucBat:public Tho
{
public:
	LucBat() :Tho()
	{

	}
	bool kt_van()
	{
		for (int cau = 0; cau < socau; cau++)
			if (cau%2==0)
				if (ktgieovan(tochar(tieng[cau][5]), tochar(tieng[cau + 1][5])) == 0) return false;
			else
				if (ktgieovan(tochar(tieng[cau][7]), tochar(tieng[cau + 1][5])) == 0) return false;
		return true;
	}
};