#include <iostream>
#include "SphereToma.h"

int main()
{
    Toma::Sphere wSphere; 
    float* wCoordCenter = new float [2];
    float* wRadius = new float;

    std::cout << "Quelles sont les corrdonnées de ton point ? \n";
    std::cin >> wCoordCenter[0] >> wCoordCenter[1];

    std::cout << "Quel est le rayon de ton point ? \n";
    std::cin >> *wRadius;

    wSphere.setCenter(wCoordCenter);
    wSphere.setRadius(wRadius);

    std::cout << "La surface de ta sphère est : " << wSphere.getSurface() << std::endl;
    std::cout << "Le volume de ta sphère est : " << wSphere.getVolume() << std::endl;

    return 1;
}