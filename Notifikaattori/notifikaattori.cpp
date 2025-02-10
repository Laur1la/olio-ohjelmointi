#include "Notifikaattori.h"
#include <iostream>

Notifikaattori::Notifikaattori() {
    cout << "Luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja* s) {
    s->next = seuraajat;
    seuraajat = s;
    cout << "Lisatty seuraaja: " << s->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja* s) {
    if (seuraajat == nullptr) {
        cout << "Ei seuraajia, en voi poistaa" << endl;
        return;
    }
    if (seuraajat == s) {
        cout << "poistettava on listan ensimmainen" << endl;
        if (seuraajat->next == nullptr) {
            seuraajat = nullptr;
        } else {
            cout << "poistetaan ensimmainen ja tehdaan toisesta ensimmainen" << endl;
            seuraajat = seuraajat->next;
        }
        return;
    }

    Seuraaja* osoitin = seuraajat;
    while (osoitin->next != nullptr) {
        if (osoitin->next == s) {
            cout << "poistin seuraajan " << s->getNimi() << endl;
            osoitin->next = osoitin->next->next;
            return;
        }
        osoitin = osoitin->next;
    }
}

void Notifikaattori::tulosta() const {
    cout << "Notifikaattorin seuraajat:" << endl;
    Seuraaja* osoitin = seuraajat;
    while (osoitin != nullptr) {
        cout << osoitin->getNimi() << endl;
        osoitin = osoitin->next;
    }
}

void Notifikaattori::postita(const std::string& viesti) {
    cout << "Notifikaattori postasi viestin: " << viesti << endl;
    Seuraaja* osoitin = seuraajat;
    while (osoitin != nullptr) {
        osoitin->paivitys(viesti);
        osoitin = osoitin->next;
    }
}
