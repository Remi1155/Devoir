#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
#include "./Point.hpp"

namespace geometrie
{
    class Triangle
    {
        public:
            Triangle();
            ~Triangle();
            Point getA();
            Point getB();
            Point getC();
            void setA(Point A);
            void setB(Point B);
            void setC(Point C);
            void afficher();
            float circonference();
        private:
            Point A, B, C;
    };
}

#endif