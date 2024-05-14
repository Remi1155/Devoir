#include "../headers/Rectangle.hpp"
#include <iostream>

namespace geometrie
{
    Rectangle::Rectangle()
    {
    
    }

    Rectangle::~Rectangle()
    {

    }

    void Rectangle::afficher()
    {
        std::cout << "Rectangle de longueur = " << longueur;
        std::cout << " et de largeur = " << largeur << std::endl;
    }

    float Rectangle::getLongueur()
    {
        return (longueur);
    }

    float Rectangle::getLargeur()
    {
        return (largeur);
    }

    void Rectangle::setLongueur(float longueur)
    {
        this->longueur = longueur;
    }

    void Rectangle::setLargeur(float largeur)
    {
        this->largeur = largeur;
    }

    float Rectangle::circonference()
    {
        return (2 * (longueur + largeur));
    }

    float Rectangle::surface()
    {
        return (longueur * largeur);
    }
}