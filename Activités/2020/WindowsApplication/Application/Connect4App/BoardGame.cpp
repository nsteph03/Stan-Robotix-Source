#include "BoardGame.h"

BoardGame::BoardGame() 
{
	mTokenList.resize(42); // =6*7 
	
}

void BoardGame::paint(HDC ihdc, RECT& iPaintArea)
{	
	mDrawingRect = iPaintArea;

	for (int i = iPaintArea.top+kTopBorder; i < iPaintArea.bottom; i += kSizeSideCell) 
	{

		::MoveToEx(ihdc, iPaintArea.left, i, nullptr);
		::LineTo(ihdc, iPaintArea.right, i);

	} // dessiner les lignes horizontales

	for (int j = iPaintArea.left; j < iPaintArea.right; j += kSizeTopCell)
	{
		::MoveToEx(ihdc, j, iPaintArea.top + kTopBorder, nullptr);
		::LineTo(ihdc, j, iPaintArea.bottom);

	} //dessiner les lignes verticales

	int wNbToken = mTokenList.size();
	for (int i = 0; i < wNbToken; i++)
	{
		Token wToken = mTokenList[i];
		wToken.draw(ihdc);
	}

	// Afficher le gagnat ici  selon mWinner


}

void BoardGame::addRedToken(int iPosX)
{   
	addToken(iPosX, Token::eRed);
	
}

void BoardGame::addBlueToken(int iPosX)
{
	addToken(iPosX, Token::eBlue);
}

void BoardGame::addToken(int iPosX, int iColor)
{  
	int wSelectedColumn = getColumn(iPosX);
	int wSelectedRow = getRow(wSelectedColumn, iColor);


	if (wSelectedRow != -1 && wSelectedColumn != -1)
	{
		int wCenterX = (wSelectedColumn * kSizeTopCell) + mDrawingRect.left + kSizeTopCell / 2;
		int wCenterY = (wSelectedRow * kSizeSideCell) + (mDrawingRect.top + kTopBorder) + kSizeSideCell / 2;

		Token wToken;
		wToken.setPosition(wCenterX, wCenterY);
		wToken.setType(iColor);

		mTokenList.push_back(wToken);
	}
	

	

	// Creer fonction pour determinant s il y a un gagnant qui sera stocke dans mWinner
}

int BoardGame::getColumn(int iPosX)
{
	int wColumn = -1; 
	if ((mDrawingRect.left < iPosX) && (iPosX < mDrawingRect.left + (kSizeTopCell * 7))) // click dans l'espace de jeu

	{
		wColumn = (iPosX-mDrawingRect.left) / kSizeTopCell;
	}

	return wColumn;
}

int BoardGame::getRow(int iPosX, int iTokenColor)
{
	int wRow = -1;

    for (int i = 5; i >= 0; i--)
		{
			if (mGridState[iPosX][i] == Token::eNothing)
			{
				wRow = i;
				mGridState[iPosX][i] = iTokenColor;
				break;
			}
	    }

	return wRow;
}

void BoardGame::resetGame()
{
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 6; j++)
		{
			mGridState[i][j] = Token::eNothing;
		}
	}
}

void BoardGame::checkConnect(int iColumn, int iRow)
{
	/*for (int i = 0; i < 7; i++)
	{
		for (int j = 0; i < 8; i++)
		{
			for (int h = 0; h < 5; h++)
			{
				if (mGridState[i][j] = eRed || eBlue)
				{
					mConnect = true;
				}
			}

		}
	}
	*/
}

