#include <math.h>

#include "M-Cercle.h"

M_Cercle::Circle::Circle()
{

    mRayon = new float;
    mPoint = new float[2];

}

M_Cercle::Circle::~Circle() {}

void M_Cercle::Circle::setRayon(float* iRayon)
{

    mRayon = iRayon;

}

void M_Cercle::Circle::setPoint(float* iPoint)
{

    mPoint = iPoint;

}

float M_Cercle::Circle::getArea()
{

    return *mRayon * pow(M_Cercle::kPi, 2);

}

float M_Cercle::Circle::getCirc()
{

    return *mRayon * 2 * M_Cercle::kPi;

}