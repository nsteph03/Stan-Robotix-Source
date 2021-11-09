#include <iostream>
#include "Sphere.h"

int main()
{
    ArthurSphere::Sphere wSphere; 

    Point* wPoint = new Point;

    std::cout<<"\n Objets init";

    float wXcoord =2;
    float wYcoord =2;
    wPoint->setCoordX(&wXcoord);
    wPoint->setCoordY(&wYcoord);
    std::cout<<"\n Point init";

    wSphere.setPoint(wPoint);
    std::cout<<"\n Sphere midle init";

    float* Ray = new float;
    *Ray = 2;

    wSphere.setRay(Ray);
    std::cout<<"\n Sphere Ray init";

    std::cout<< "\n Surface : " << wSphere.getSurface();
    std::cout<< "\n Volume : " << wSphere.getVolume();

}