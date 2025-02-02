#include "Asiakas.h"

int main() {
    Asiakas asiakas(500); // Credit limit of 500

    asiakas.talletus(1000);
    asiakas.nosto(200);
    asiakas.luotonNosto(300);
    asiakas.luotonMaksu(100);

    asiakas.showSaldo();

    return 0;
}
