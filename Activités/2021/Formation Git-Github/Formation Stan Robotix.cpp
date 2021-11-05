#include <iostream>

#include "Point.h"
#include "Triangle.h"

int main()
{
	bool isDifferent(float, float, float, float);

	Triangle wTriangle;

	Point wPoint[3];

	float wX1 = 0, wX2 = 0, wX3 = 0, wY1 = 0, wY2 = 0, wY3 = 0;

	float wXPos[3] = { 0, 0, 0 };
	float wYPos[3] = { 0, 0, 0 };

		for (int i = 0; i < 3; i++)
		{
			std::cout << "Veuillez indiquer les coordonnees du point " << i + 1 << " :\n>>> X = ";
			std::cin >> wXPos[i];
			std::cout << ">>> Y = ";
			std::cin >> wYPos[i];
			std::cout << std::endl;
		}

		while (!isDifferent(wXPos[0], wXPos[1], wYPos[0], wYPos[1]))
		{
			std::cout << "Les points 1 et 2 sont identiques.\nVeuillez re-indiquer les coordonnees des points 1 et 2 :\n>>> X = ";

			for (int i = 0; i < 2; i++)
			{
				std::cout << "Veuillez indiquer les coordonnees du point " << i + 1 << " :\n>>> X = ";
				std::cin >> wXPos[i];
				std::cout << ">>> Y = ";
				std::cin >> wYPos[i];
				std::cout << std::endl;
			}
		}

		while (!isDifferent(wXPos[1], wXPos[2], wYPos[1], wYPos[2]))
		{
			std::cout << "Les points 2 et 3 sont identiques.\nVeuillez re-indiquer les coordonnees des points 2 et 3 :\n>>> X = ";

			for (int i = 1; i < 3; i++)
			{
				std::cout << "Veuillez indiquer les coordonnees du point " << i + 1 << " :\n>>> X = ";
				std::cin >> wXPos[i];
				std::cout << ">>> Y = ";
				std::cin >> wYPos[i];
				std::cout << std::endl;
			}
		}

		while (!isDifferent(wXPos[0], wXPos[2], wYPos[0], wYPos[2]))
		{
			std::cout << "Les points 1 et 3 sont identiques.\nVeuillez re-indiquer les coordonnees des points 1 et 3 :\n>>> X = ";

			for (int i = 0; i < 3; i+= 2)
			{
				std::cout << "Veuillez indiquer les coordonnees du point " << i + 2 << " :\n>>> X = ";
				std::cin >> wXPos[i];
				std::cout << ">>> Y = ";
				std::cin >> wYPos[i];
				std::cout << std::endl;
			}
		}

	for (int i = 0; i < 3; i++)
	{
		wPoint[i].setCoordX(&wXPos[i]);

		wPoint[i].setCoordY(&wYPos[i]);
	}

	wTriangle.setPoint(wPoint);

	std::cout << "Aire du triangle   : " << wTriangle.getArea() << std::endl;
	std::cout << "Longueur du cote 1 : " << wTriangle.getSides()[0] << std::endl;
	std::cout << "Longueur du cote 2 : " << wTriangle.getSides()[1] << std::endl;
	std::cout << "Longueur du cote 3 : " << wTriangle.getSides()[2];
}

bool isDifferent(float iX1, float iX2, float iY1, float iY2)
{
	if(iX1 == iX2 && iY1 == iY2)
	{
		return false;
	}

	return true;
}