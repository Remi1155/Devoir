#include "../headers/Triangle.hpp"
#include <iostream>

namespace geometrie
{
    Triangle::Triangle()
    {
    }

    Triangle::~Triangle()
    {
    }

    Point Triangle::getA()
    {
        return (A);
    }

    Point Triangle::getB()
    {
        return (B);
    }

    Point Triangle::getC()
    {
        return (C);
    }

    void Triangle::setA(Point A)
    {
        this->A = A;
    }

    void Triangle::setB(Point B)
    {
        this->B = B;
    }
    
    void Triangle::setC(Point C)
    {
        this->C = C;
    }

    void Triangle::afficher()
    {
        std::cout << "Triangle formé par les points A, B et C tels que: " << std::endl;
        std::cout << "xA = " << A.getX() << std::endl;
        std::cout << "yA = " << A.getY() << std::endl;
        std::cout << "xB = " << B.getX() << std::endl;
        std::cout << "yB = " << B.getY() << std::endl;
        std::cout << "xC = " << C.getX() << std::endl;
        std::cout << "yC = " << C.getY() << std::endl;
    }
    
    float Triangle::circonference()
    {
        float distAB, distAC, distBC;
        distAB = A.distance2Points(B);
        distAC = A.distance2Points(C);
        distBC = B.distance2Points(C);

        return (distAB + distAC + distBC);  
    }
}