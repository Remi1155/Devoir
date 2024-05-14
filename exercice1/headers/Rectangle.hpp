#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

namespace geometrie
{
    class Rectangle
    {
        public:
            Rectangle();
            ~Rectangle();
            void afficher();
            float getLongueur();
            float getLargeur();
            void setLongueur(float longueur);
            void setLargeur(float largeur);
            float circonference();
            float surface();
        private:
            float longueur, largeur;
    };
}

#endif