#include "PacmanApplication.h"

#include <string>

PacmanApplication::PacmanApplication()
{
	mPacmanGameBorad.initializeMap();
}

void PacmanApplication::paint(HDC ihdc, RECT& iPaintArea)
{
	std::wstring wTitle = L"Application de Pacman";

	::DrawText(
		ihdc,
		wTitle.c_str(),
		wTitle.length(),
		&iPaintArea,
		DT_CENTER | DT_TOP);


	mPacmanGameBorad.drawMap(ihdc, iPaintArea);

	mBlinky.initialise(iPaintArea, eBlinky, &mPacmanGameBorad, &mPacman);
	
	/*mPinky.initialise(iPaintArea, ePinky);
	mInky.initialise(iPaintArea, eInky);
	mClyde.initialise(iPaintArea, eClyde);*/

	mBlinky.paint(ihdc);
	
	/* Pas besoin d'eux pour le moment
	mPinky.paint(ihdc);
	mInky.paint(ihdc);
	mClyde.paint(ihdc);*/

	mPacman.initialise(iPaintArea); // initialiser les valeurs de certaines constantes
	mPacman.paint(ihdc);
}

void PacmanApplication::onChar(char iChar, short iDetail)
{
	switch (iChar)
	{
	case 'a':
	case 'A':
		mNextDir = 'l';
		break;
	case 'w':
	case 'W':
		mNextDir = 'u';
		break;
	case 'd':
	case 'D':
		mNextDir = 'r';
		break;
	case 's':
	case 'S':
		mNextDir = 'd';
		break;
	}
}

void PacmanApplication::onKeyDown(char iChar, short iDetail)
{

}

void PacmanApplication::onMouseMove(int iPosX, int iPosY)
{

}

void PacmanApplication::onMouseLeftDoubleClick(int iPosX, int iPosY)
{

}

void PacmanApplication::onMouseLeftClick(int iPosX, int iPosY)
{
	//160 59      975 540
}

void PacmanApplication::onMouseRightClick(int iPosX, int iPosY)
{

}

void PacmanApplication::onTimer()
{
	mBlinky.move();
	mCoorPacX = mPacman.getX();
	mCoorPacY = mPacman.getY();

	mCoorBlocX = (mCoorPacX - 350 + 20) / 40;
	mCoorBlocY = (mCoorPacY - 100 + 20) / 40;

	if (mNextDir == 'l' && !mPacmanGameBorad.isWall(((mCoorPacX - 18 - 350 + 20) - 5) / 40, (mCoorPacY - 100 + 20 - 18) / 40) 
		&& !mPacmanGameBorad.isWall(((mCoorPacX - 18 - 350 + 20) - 5) / 40, (mCoorPacY - 100 + 20 + 18) / 40))
	{
		mDir = 'l';
	}
	else if (mNextDir == 'r' && !mPacmanGameBorad.isWall(((mCoorPacX + 18 - 350 + 20) + 5) / 40, (mCoorPacY - 100 + 20 - 18) / 40) 
		&& !mPacmanGameBorad.isWall(((mCoorPacX + 18 - 350 + 20) + 5) / 40, (mCoorPacY - 100 + 20 + 18) / 40))
	{
		mDir = 'r';
	}
	else if (mNextDir == 'u' && !mPacmanGameBorad.isWall((mCoorPacX - 350 + 20 - 18) / 40, ((mCoorPacY - 18 - 100 + 20) - 5) / 40) 
		&& !mPacmanGameBorad.isWall((mCoorPacX - 350 + 20 + 18) / 40, ((mCoorPacY - 18 - 100 + 20) - 5) / 40))
	{
		mDir = 'u';
	}
	else if (mNextDir == 'd' && !mPacmanGameBorad.isWall((mCoorPacX - 350 + 20 - 18) / 40, ((mCoorPacY + 18 - 100 + 20) + 5) / 40) 
		&& !mPacmanGameBorad.isWall((mCoorPacX - 350 + 20 + 18) / 40, ((mCoorPacY + 18 - 100 + 20) + 5) / 40))
	{
		mDir = 'd';
	}

	if (mDir == 'l' && !mPacmanGameBorad.isWall(((mCoorPacX - 18 - 350 + 20) - 5) / 40, mCoorBlocY))
	{
		mPacman.movePacmanLeft();
		/*mBlinky.moveMonsterLeft(1);
		mPinky.moveMonsterLeft(2);
		mInky.moveMonsterLeft(3);
		mClyde.moveMonsterLeft(4);*/
	}
	else if (mDir == 'u' && !mPacmanGameBorad.isWall(mCoorBlocX, ((mCoorPacY - 18 - 100 + 20) - 5) / 40))
	{
		mPacman.movePacmanUp();
		/*mBlinky.moveMonsterUp(1);
		mPinky.moveMonsterUp(2);
		mInky.moveMonsterUp(3);
		mClyde.moveMonsterUp(4);*/
	}
	else if (mDir == 'r' && !mPacmanGameBorad.isWall(((mCoorPacX + 18 - 350 + 20) + 5) / 40, mCoorBlocY))
	{
		mPacman.movePacmanRight();
		/*mBlinky.moveMonsterRight(1);
		mPinky.moveMonsterRight(2);
		mInky.moveMonsterRight(3);
		mClyde.moveMonsterRight(4);*/
	}
	else if (mDir == 'd' && !mPacmanGameBorad.isWall(mCoorBlocX, ((mCoorPacY + 18 - 100 + 20) + 5) / 40))
	{
		mPacman.movePacmanDown();
		/*mBlinky.moveMonsterDown(1);
		mPinky.moveMonsterDown(2);
		mInky.moveMonsterDown(3);
		mClyde.moveMonsterDown(4);*/
	}

	IApplication::onTimer(); // Pour redessiner l'ecran
}
