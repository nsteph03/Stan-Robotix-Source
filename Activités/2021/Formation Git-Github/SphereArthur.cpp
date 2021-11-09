#include "SphereArthur.h"

namespace ArthurSphere
{
Sphere::Sphere() { }
Sphere::~Sphere() { }

void Sphere::setRay(float* iRay)
{
  mRay = iRay;
}

void Sphere::setPoint(Point* iPoint)
{
  mPoint = iPoint;
}

float* Sphere::getRay()
{
  return mRay;
}

Point* Sphere::getPoint()
{
  return mPoint;
}

double Sphere::getSurface()
{
  return 4 * kPi * (*mRay) * (*mRay) ;
}

double Sphere::getVolume()
{
  return 4/3 * kPi * (*mRay) * (*mRay) * (*mRay) ;
}

}
