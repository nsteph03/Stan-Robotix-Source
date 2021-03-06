#include "Token.h"

Token::Token(): mPosX(0), mPosY(0)
{
	mRedBrush = CreateSolidBrush(RGB(255, 0, 0));
	mBlueBrush = CreateSolidBrush(RGB(0,0,255));
	
}

void Token::drawTokenRed(HDC ihdc, RECT& iPaintArea)
{
    drawToken(ihdc, iPaintArea, mRedBrush);
}

void Token::drawTokenBlue(HDC ihdc, RECT& iPaintArea)
{
	drawToken(ihdc, iPaintArea, mBlueBrush);
}
void Token::drawToken(HDC ihdc, RECT& iPaintArea, HBRUSH& iBrush)
{

	if (mPos)
	{
		int wRadius = 30;
		while (wRadius > 15)
		{
			::Ellipse(ihdc,
				(int)(mPosX)-wRadius,
				(int)(mPosY)-wRadius,
				(int)(mPosX)+wRadius,
				(int)(mPosY)+wRadius);



			wRadius -= 5;
	
		}
		HGDIOBJ wOldBrush = ::SelectObject(ihdc, iBrush);


		::FloodFill(ihdc, mPosX, mPosY, RGB(0, 0, 0));

		::SelectObject(ihdc, wOldBrush);
	}
}
void Token::setPosition(int iPosX, int iPosY)
{
	mPos = true;
	mPosX = iPosX;
	mPosY = iPosY;
}

void Token::color(HDC ihdc, RECT& iPaintArea)
{
	::Ellipse(ihdc,
		(int)(150)-15,
		(int)(50)-15,
		(int)(150)+15,
		(int)(50)+15);

}