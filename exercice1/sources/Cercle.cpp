#include "../headers/Cercle.hpp"
#include <iostream>
#include <cmath>

namespace geometrie
{
    Cercle::Cercle()
    {
        
    }

    Cercle::~Cercle()
    {

    }

    void Cercle::afficher()
    {
        std::cout << "Cercle de centre de coordonnées: ";
        std::cout << "x = " << Centre.getX() << ", y = " << Centre.getY();
        std::cout << " et de rayon  r = " << rayon << std::endl;
    }

    float Cercle::getRayon()
    {
        return rayon;
    }

    Point Cercle::getCentre()
    {
        return Centre;
    }

    void Cercle::setRayon(float rayon)
    {
        this->rayon = rayon;
    }

    void Cercle::setCentre(Point Centre)
    {
        this->Centre = Centre;
    }

    float Cercle::circonference()
    {
        return 2 * M_PI * rayon;
    }

    float Cercle::surface()
    {
        return M_PI * rayon * rayon; 
    }

}