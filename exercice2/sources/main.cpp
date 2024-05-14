#include <iostream>
#include "../headers/Activate.hpp"

int main()
{
    Activate SerialAct = Activate();
    if (SerialAct.getStatus() == false)
    {
        
        SerialAct.verifierActivation();
    }
    if (SerialAct.getStatus() == true)
    {
        if(SerialAct.getVEssai()==0)
        {
           std::cout << "Accès refusé" << std::endl;
        }   
        else
        {
            std::cout << "Bienvenue\n Le programme fonctionne" << std::endl;
        }
    }
    else
    {
        std::cout << "Accès refusé" << std::endl; 
    }
}