#include "BattleshipApplication.h"

#include <string>

BattleshipApplication::BattleshipApplication()
{

}

void BattleshipApplication::paint(HDC ihdc, RECT& iPaintArea)
{
	std::wstring wTitle = L"Application de Battleship";

	::DrawText(
		ihdc,
		wTitle.c_str(),
		wTitle.length(),
		&iPaintArea,
		DT_CENTER | DT_TOP);
}

void BattleshipApplication::onChar(char iChar, short iDetail)
{

}

void BattleshipApplication::onKeyDown(char iChar, short iDetail)
{

}

void BattleshipApplication::onMouseLeftDoubleClick(int iPosX, int iPosY)
{

}

void BattleshipApplication::onMouseLeftClick(int iPosX, int iPosY)
{

}

void BattleshipApplication::onMouseRightClick(int iPosX, int iPosY)
{

}

void BattleshipApplication::onTimer()
{

	IApplication::onTimer(); // Pour redessiner l'ecran
}