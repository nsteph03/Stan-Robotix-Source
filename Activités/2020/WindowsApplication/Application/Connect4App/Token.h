#pragma once
#include <windows.h>



class Token
{
public:

	Token();
	void drawTokenRed(HDC ihdc, RECT& iPaintArea);
	void drawTokenBlue(HDC ihdc, RECT& iPaintArea);
	void drawToken(HDC ihdc, RECT& iPaintArea, HBRUSH & iBrush);
	void setPosition(int iPosX, int iPosY);

private:

	int mPosX, mPosY;
	HBRUSH mRedBrush, mBlueBrush;
	bool mPos;

	
};

