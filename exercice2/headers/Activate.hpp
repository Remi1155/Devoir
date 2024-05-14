#ifndef ACTIVATE_HPP
#define ACTIVATE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Activate
{
public:
    Activate();
    ~Activate();
    void activer();
    bool verifierActivation();
    bool getStatus() const;
    int getVEssai() const;
private:
    std::string code = "abc";
    int point;
    bool status = false;
    int vEssai;
};

#endif
