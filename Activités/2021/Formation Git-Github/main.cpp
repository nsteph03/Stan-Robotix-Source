#include "TomaMohan-Cercle.h"
#include <iostream>

int main()
{
    TomaMohan::Cercle wCercle;
    float* mPoint = new float [2];
    float* mRayon = new float;
    
    std::cout << "Rentre le centre de ton cercle \n";
    std::cin >> mPoint[0] >> mPoint[1];

    std::cout << "Rentre ton rayon \n";
    std::cin >> *mRayon;

    wCercle.setPoint(mPoint);
    wCercle.setRayon(mRayon);

    std::cout << "Ta circon est égale à " << wCercle.getCircumference() << std::endl;
    std::cout << "Ton aire est égale à " << wCercle.getArea() << std::endl;
}