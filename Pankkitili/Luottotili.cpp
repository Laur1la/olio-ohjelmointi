#include "Luottotili.h"

Luottotili::Luottotili(double limit) : creditLimit(limit) {}

bool Luottotili::withdraw(double amount) {
    if (amount < 0 || saldo - amount < -creditLimit) return false;
    saldo -= amount;
    return true;
}

bool Luottotili::deposit(double amount) {
    if (amount < 0 || saldo + amount > 0) return false;
    saldo += amount;
    return true;
}
