#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "Pankkitili.h"

class Luottotili : public Pankkitili {
private:
    double creditLimit;

public:
    Luottotili(double limit);
    bool withdraw(double amount) override;
    bool deposit(double amount) override;
};

#endif // LUOTTOTILI_H
