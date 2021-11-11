#include "Point.h"

namespace Toma
{
    const float kPi = 3.1415926;

    class Sphere
    {
        private:
            Point* mCenter;
            float* mRadius;
        public:
            Sphere();
            ~Sphere();
            void setCenter(float*);
            void setRadius(float*);
            float getSurface();
            float getVolume();
    };
}