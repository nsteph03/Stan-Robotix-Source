namespace TomaMohan
{
    const double kPi = 3.1415926;

    class Cercle
    {
        private:
            float* mRayon;
            float* mPoint;
        public:
            Cercle();
            ~Cercle();
            void setRayon(float*);
            void setPoint(float*);
            float getArea();
            float getCircumference();
    };
}