#include "Seuraaja.h"
#include <iostream>


Seuraaja::Seuraaja(string n) : nimi(n) {
    cout << "Luodaan seuraaja " << n << endl;
}

string Seuraaja::getNimi() const {
    return nimi;
}

void Seuraaja::paivitys(const string& viesti) {
    cout << nimi << " sai viestin: " << viesti << endl;
}
