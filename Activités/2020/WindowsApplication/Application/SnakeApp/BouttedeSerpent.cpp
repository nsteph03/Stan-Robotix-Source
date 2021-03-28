
#include "BoutteDeSerpent.h"
#include <stdlib.h>     
#include <time.h>       
#include <math.h>
#include <string>

BoutteDeSerpent::BoutteDeSerpent()
{

	COLORREF wColor = RGB(255, 0, 0);
	mBrush = CreateSolidBrush(wColor);


	mIsInit = false;


}

void BoutteDeSerpent::updateDrawingArea(RECT iWindowRect)
{

	if (!mIsInit)
	{
		mCoorX = iWindowRect.left + (double)(rand() % (iWindowRect.right - iWindowRect.left));
		mCoorY = iWindowRect.top + (double)(rand() % (iWindowRect.bottom - iWindowRect.top));
		

		mIsInit = true;
	}
	if (mCoorX > iWindowRect.right)
	{
		mCoorX = (double)(iWindowRect.right);
		//inserer code qui delet la balle
	}
	else if (mCoorX < iWindowRect.left)
	{
		mCoorX = (double)(iWindowRect.left);
		//inserer code qui delet la balle
	}

	if (mCoorY > iWindowRect.bottom)
	{
		mCoorY = (double)(iWindowRect.bottom);
		//inserer code qui delet la balle
	}
	else if (mCoorY < iWindowRect.top)
	{
		mCoorY = (double)(iWindowRect.top);
		//inserer code qui delet la balle
	}
}

void BoutteDeSerpent::paint(HDC ihdc) {
	HGDIOBJ wOldBrush = ::SelectObject(ihdc, mBrush);



	::Ellipse(ihdc,
		(int)(mCoorX)-mRadius,
		(int)(mCoorY)-mRadius,
		(int)(mCoorX)+mRadius,
		(int)(mCoorY)+mRadius);



	::SelectObject(ihdc, wOldBrush);

}

void BoutteDeSerpent::increaseSpeed()
{
	double wSpeed = sqrt(mSpeedX * mSpeedX + mSpeedY * mSpeedY);

	if (wSpeed < 40.0)
	{
		mSpeedX = mSpeedX * 1.1;
		mSpeedY = mSpeedY * 1.1;
	}
}
void BoutteDeSerpent::decreaseSpeed()
{
	double wSpeed = sqrt(mSpeedX * mSpeedX + mSpeedY * mSpeedY);

	if (wSpeed > 1.0)
	{
		mSpeedX = mSpeedX / 1.1f;
		mSpeedY = mSpeedY / 1.1f;
	}
}

void BoutteDeSerpent::Up()
{
	mCoorY -= mSpeedY;
}

void BoutteDeSerpent::Down()
{
	mCoorY += mSpeedY;
}

void BoutteDeSerpent::Left()
{
	mCoorX -= mSpeedX;
}

void BoutteDeSerpent::Right()
{
	mCoorX += mSpeedX;
}
