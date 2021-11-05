#include "Point.h"

Point::Point() { }

Point::~Point() { }

void Point::setCoordX(float* iCoordX)
{
    mCoordX = iCoordX;
}

void Point::setCoordY(float* iCoordY)
{
    mCoordY = iCoordY;
}

float* Point::getCoordX()
{
    return mCoordX;
}

float* Point::getCoordY()
{
    return mCoordY;
}