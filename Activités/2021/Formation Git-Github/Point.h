#pragma once

class Point
{
    float* mCoordX;
    float* mCoordY;

public:
    Point();
    ~Point();

    void setCoordX(float* iCoordX);
    void setCoordY(float* iCoordY);

    float* getCoordX();
    float* getCoordY();
};