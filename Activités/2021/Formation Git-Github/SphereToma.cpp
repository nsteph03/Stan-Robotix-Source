#include "SphereToma.h"

namespace Toma
{
    Sphere::Sphere()
    {
        mCenter = new Point;
        mRadius = new float;
    }

    Sphere::~Sphere()
    {
        delete mCenter;
        delete mRadius;
    }

    void Sphere::setCenter(float* iCenter)
    {
        mCenter->setCoordX(&iCenter[0]);
        mCenter->setCoordY(&iCenter[1]);
    }

    void Sphere::setRadius(float* iRadius)
    {
        mRadius = iRadius;
    }
    
    float Sphere::getSurface()
    {
        return 4 * kPi * (*mRadius) * (*mRadius); 
    }

    float Sphere::getVolume()
    {
        return 4 * kPi * (*mRadius) * (*mRadius) * (*mRadius) / 3;
    }
}