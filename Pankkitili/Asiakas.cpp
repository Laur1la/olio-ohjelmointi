#include "Asiakas.h"
#include <iostream>
using namespace std;

Asiakas::Asiakas(double creditLimit) : luottotili(creditLimit) {}

void Asiakas::showSaldo() const {
    cout << "Pankkitilin saldo: " << pankkitili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double amount) {
    return pankkitili.deposit(amount);
}

bool Asiakas::nosto(double amount) {
    return pankkitili.withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount) {
    return luottotili.deposit(amount);
}

bool Asiakas::luotonNosto(double amount) {
    return luottotili.withdraw(amount);
}
