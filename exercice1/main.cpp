#include "./headers/Point.hpp"
#include "./headers/Cercle.hpp"
#include "./headers/Carre.hpp"
#include "./headers/Rectangle.hpp"
#include "./headers/Triangle.hpp"
#include <iostream>

int main()
{
    geometrie::Point A=geometrie::Point(), B=geometrie::Point(), C=geometrie::Point();
    geometrie::Cercle Cercle_1=geometrie::Cercle();
    geometrie::Rectangle Rect=geometrie::Rectangle();
    geometrie::Carre Car=geometrie::Carre();
    geometrie::Triangle Tri=geometrie::Triangle();

    std::cout << "==============================" << std::endl;
    A.setX(2);
    A.setY(2);
    std::cout << "A est un ";
    A.afficher();
    

    B.setX(2);
    B.setY(0);
    std::cout << "B est un ";
    B.afficher();

    std::cout << "La distance entre A est B est " << A.distance2Points(B) << std::endl;
    std::cout << "La distance entra A est l'origine est " << A.distanceOrigine() << std::endl;
    
    std::cout << "==============================" << std::endl;
    Cercle_1.setCentre(A);
    Cercle_1.setRayon(2);
    std::cout << "Cercle_1 est un ";
    Cercle_1.afficher();

    std::cout << "La circonférence de Cercle_1 est " << Cercle_1.circonference() << std::endl;
    std::cout << "La surface de Cercle_1 est " << Cercle_1.surface() << std::endl;

    std::cout << "==============================" << std::endl;
    Rect.setLongueur(20);
    Rect.setLargeur(10);
    std::cout << "Rect est un ";
    Rect.afficher();

    std::cout << "La circonférence de Rect est " << Rect.circonference() << std::endl;
    std::cout << "La surface de Rect est " << Rect.surface() << std::endl;

    std::cout << "==============================" << std::endl;
    Car.setCote(5);
    std::cout << "Car est un ";
    Car.afficher();
    std::cout << "La circonférence de Car est " << Car.circonference() << std::endl;
    std::cout << "La surface de Car est " << Car.surface() << std::endl;

    std::cout << "==============================" << std::endl;
    Tri.setA(A);
    Tri.setB(B);
    Tri.setC(C);
    std::cout << "Tri est un ";
    Tri.afficher();
    std::cout << "La circonférence de Tri est " << Tri.circonference() << std::endl;
    std::cout << "==============================" << std::endl;


    return (0);
}
