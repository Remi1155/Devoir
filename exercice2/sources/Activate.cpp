#include "../headers/Activate.hpp"

void Activate::activer()
{
    std::ofstream fs("./nbEssai.txt");
    fs << "déjà activé";
    status = true;
    fs.close();
}

bool Activate::verifierActivation()
{
    std::ifstream fs("./serie.txt");
    if (!fs) {
        std::cout << "fichier d'activation non trouvé" << std::endl;
        return false;
    }
    std::string userCle;
    fs >> userCle;
    fs.close();
    if (userCle == code) {
        std::cout << "Activation terminé" << std::endl;
        activer();
        return true;
    } else {
        std::string s;
        std::ifstream tryFile("./nbEssai.txt");
        tryFile >> s;
        tryFile.close();
        int i = std::stoi(s);
        std::ofstream w("./nbEssai.txt");
        vEssai = (i - 1);
        w << vEssai;
        w.close();
        return false;
    }
}

Activate::Activate()
{
    std::string i;
    std::ifstream fs("./nbEssai.txt");
    if (!fs) {
        std::cout << "fichier introuvable" << std::endl;
        point = 0;
    } else {
        fs >> i;
        if (i == "déjà activé") {
            status = true;
        } else {
            point = std::stoi(i);
        }
        fs.close();
    }
}

Activate::~Activate() {}

bool Activate::getStatus() const
{
    return status;
}

int Activate::getVEssai() const
{
    return vEssai;
}
