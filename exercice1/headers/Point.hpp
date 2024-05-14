#ifndef POINT_HPP
#define POINT_HPP

namespace geometrie
{
    class Point
    {
        public:
            Point();
            ~Point();
            void afficher();
            float getX();
            float getY();
            void setX(float x);
            void setY(float y);
            float distance2Points(Point A);
            float distanceOrigine();
        private:
            float x, y;
    };
}

#endif