#include "TomaMohan-Cercle.h"

TomaMohan::Cercle::Cercle()
{
    mRayon = new float;
    mPoint = new float [2];
};

TomaMohan::Cercle::~Cercle()
{
    delete mRayon;
    delete mPoint;
}

void TomaMohan::Cercle::setRayon(float* iRayon)
{
    mRayon = iRayon;
}

void TomaMohan::Cercle::setPoint(float* iPoint)
{
    mPoint = iPoint;
}

float TomaMohan::Cercle::getArea()
{
    return *mRayon * TomaMohan::kPi * TomaMohan::kPi;
}

float TomaMohan::Cercle::getCircumference()
{
    return *mRayon * 2 * TomaMohan::kPi;
}