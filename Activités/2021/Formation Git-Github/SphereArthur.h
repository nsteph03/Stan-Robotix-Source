#include "Point.h"

namespace ArthurSphere
{
const double kPi = 3.14159265358 ;

class Sphere
{
  Point* mPoint;
  float* mRay;

public:

  Sphere();
  ~Sphere();

  void setRay(float* iRay);
  void setPoint(Point* iPoint);

  float* getRay();
  Point* getPoint();
  double getSurface();
  double getVolume();
};

}