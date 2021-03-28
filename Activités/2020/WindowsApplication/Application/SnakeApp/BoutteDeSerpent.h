#pragma once
#include <Windows.h>

class BoutteDeSerpent{
	public:
		BoutteDeSerpent();

		void updateDrawingArea(RECT iWindowRect);
		void paint(HDC ihdc);
		void increaseSpeed();
		void decreaseSpeed();
		void Up(); //c est le nom du film
		void Down();
		void Left();
		void Right();
	private:
		bool mIsInit = false;
		int mCoorY;
		int mCoorX;
		int mSpeedX = 10;
		int mSpeedY = 10;
		int mRadius = 20;
		HBRUSH mBrush;
};
