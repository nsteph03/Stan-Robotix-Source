namespace M_Cercle
{
    const double kPi = 3.1415926;

    class Circle
    {

        private:

            float* mRayon;
            float* mPoint;

        public:

            Circle();
            ~Circle();

            void setRayon(float*);
            void setPoint(float*);

            float getArea();
            float getCirc();

    };

}