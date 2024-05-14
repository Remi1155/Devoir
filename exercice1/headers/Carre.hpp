#ifndef CARRE_HPP
#define CARRE_HPP

namespace geometrie
{
    class Carre
    {
        public:
            Carre();
            ~Carre();
            float getCote();
            void setCote(float cote);
            void afficher();
            float circonference();
            float surface();
        private:
            float cote;
    };
}

#endif