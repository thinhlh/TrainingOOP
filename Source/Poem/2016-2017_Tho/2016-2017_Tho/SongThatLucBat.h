#pragma once
#include "LucBat.h"
class SongThatLucBat : public Tho
{
public:
	SongThatLucBat() :Tho()
	{

	}
	bool kt_van()
	{
		for (int cau = 0; cau < socau; cau++)
		{
			if (cau == 0) 
				if(ktgieovan(tochar(tieng[0][6]), tochar(tieng[1][6])) == 0) return false;
			if(cau==1)
				if (ktgieovan(tochar(tieng[1][6]), tochar(tieng[3][6])) == 0) return false;
			if(cau==3)
				if (ktgieovan(tochar(tieng[3][6]), tochar(tieng[5][6])) == 0) return false;
			if(cau==5)
				if (ktgieovan(tochar(tieng[5][6]), tochar(tieng[7][6])) == 0) return false;
		}
		return true;
	}
};
