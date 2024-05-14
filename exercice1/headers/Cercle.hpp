#ifndef CERCLE_HPP
#define CERCLE_HPP
#include "Point.hpp"

namespace geometrie
{
    class Cercle
    {
        public:
            Cercle();
            ~Cercle();
            void afficher();
            float getRayon();
            Point getCentre();
            void setRayon(float rayon);
            void setCentre(Point Centre);
            float circonference();
            float surface();
        private:
            float rayon;   
            Point Centre;  
    };
}

#endif