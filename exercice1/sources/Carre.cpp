#include "../headers/Carre.hpp"
#include <iostream>

namespace geometrie
{
    Carre::Carre()
    {
    }

    Carre::~Carre()
    {
    }

    float Carre::getCote()
    {
        return (cote);
    }

    void Carre::setCote(float cote)
    {
        this->cote = cote;
    }

    void Carre::afficher()
    {
        std::cout << "Carré de cote = " << cote << std::endl;
    }

    float Carre::circonference()
    {
        return (4 * cote);
    }

    float Carre::surface()
    {
        return (cote * cote);
    }
}
