#pragma once
#include "../../Framework/IApplication.h"
#include "PacmanPlayer.h"

class PacmanApplication :
    public IApplication
{
public:
	PacmanApplication();

protected:
	void paint(HDC ihdc, RECT& iPaintArea);

	void onChar(char iChar, short iDetail);
	void onKeyDown(char iChar, short iDetail);

	void onMouseLeftDoubleClick(int iPosX, int iPosY);
	void onMouseLeftClick(int iPosX, int iPosY);
	void onMouseRightClick(int iPosX, int iPosY);

	void onMouseMove(int iPosX, int iPosY);

	void onTimer();

private:
	PacmanPlayer Pacman;
	char mNextDir = 'l'; //  permet � pacman de conserver son mouvement 
					    // ('l' = left, 'r' = right, 'd' = down, 'u' = up). va � gauche par d�faut
};

