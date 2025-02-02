#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "Pankkitili.h"
#include "Luottotili.h"

class Asiakas {
private:
    Pankkitili pankkitili;
    Luottotili luottotili;

public:
    Asiakas(double creditLimit);
    void showSaldo() const;
    bool talletus(double amount);
    bool nosto(double amount);
    bool luotonMaksu(double amount);
    bool luotonNosto(double amount);
};

#endif // ASIAKAS_H
