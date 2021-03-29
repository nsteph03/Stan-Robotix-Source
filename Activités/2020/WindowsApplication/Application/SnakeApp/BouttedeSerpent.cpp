
#include "BoutteDeSerpent.h"
#include <stdlib.h>     
#include <time.h>       
#include <math.h>
#include <string>
#include "SnakeApplication.h"

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
//sa reset la balle si elle touche un mur, je pourais probablement supprimer le tiers des lignes qui sont ici mais g trop la flemme
	if (mCoorX > iWindowRect.right)
	{
		mCoorX = (double)(iWindowRect.right);
		mCoorX = iWindowRect.left + (double)(rand() % (iWindowRect.right - iWindowRect.left));
		mCoorY = iWindowRect.top + (double)(rand() % (iWindowRect.bottom - iWindowRect.top));
		SnakeApplication::ProchaineDir = 0;
	}
	else if (mCoorX < iWindowRect.left)
	{
		mCoorX = (double)(iWindowRect.left);
		mCoorX = iWindowRect.left + (double)(rand() % (iWindowRect.right - iWindowRect.left));
		mCoorY = iWindowRect.top + (double)(rand() % (iWindowRect.bottom - iWindowRect.top));

	}

	if (mCoorY > iWindowRect.bottom)
	{
		mCoorY = (double)(iWindowRect.bottom);
		mCoorX = iWindowRect.left + (double)(rand() % (iWindowRect.right - iWindowRect.left));
		mCoorY = iWindowRect.top + (double)(rand() % (iWindowRect.bottom - iWindowRect.top));

	}
	else if (mCoorY < iWindowRect.top)
	{
		mCoorY = (double)(iWindowRect.top);
		mCoorX = iWindowRect.left + (double)(rand() % (iWindowRect.right - iWindowRect.left));
		mCoorY = iWindowRect.top + (double)(rand() % (iWindowRect.bottom - iWindowRect.top));

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
