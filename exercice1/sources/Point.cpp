#include "../headers/Point.hpp"
#include <iostream>
#include <cmath>

namespace geometrie
{
    Point::Point()
    {
        x = 0;
        y = 0;

    }

    Point::~Point() 
    {

    }

    void Point::afficher()
    {
        std::cout << "Point de coordonnées: " << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;        
    }

    float Point::getX()
    {
        return x;
    }

    float Point::getY()
    {
        return y;
    }

    void Point::setX(float x)
    {
        this->x = x;
    }

    void Point::setY(float y)
    {
        this->y = y;
    }


    float Point::distance2Points(Point A)
    {
        float X, Y, resultat;
        X = A.getX() - x;
        Y = A.getY() - y;
        resultat = sqrt( pow(X, 2) + pow(Y, 2));
        return resultat;
    }

    float Point::distanceOrigine()
    {
        float resultat;
        resultat = sqrt(x*x + y*y);
        return resultat;
    }

}