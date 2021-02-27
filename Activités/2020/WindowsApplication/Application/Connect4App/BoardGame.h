#pragma once
#include <windows.h>
#include "Token.h"
#include <vector>

class BoardGame
{
private: 
	int mRow;
	int mColumn;
	const int kSizeTopCell = 117; 
	const int kSizeSideCell = 102;
	const int kTopBorder = 50;
	const int kLeftBorder = 0;

	std::vector<Token> mTokenList;

	

public:

	void paint(HDC ihdc, RECT& iPaintArea);
	void AddRedToken(int iPosX, int iPosY);
	void AddBlueToken(int iPosX, int iPosY);
	void InitArray();
	void click(int iPosX, int iPosY);
	
	bool mColor; // true = bleu false = rouge

	Token mRed;
	Token mBlue;
	

};

