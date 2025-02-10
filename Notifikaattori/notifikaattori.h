#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "Seuraaja.h"
#include <string>

class Notifikaattori {
public:
    Notifikaattori();
    void lisaa(Seuraaja* s);
    void poista(Seuraaja* s);
    void tulosta() const;
    void postita(const std::string& viesti);
private:
    Seuraaja* seuraajat = nullptr;
};

#endif // NOTIFIKAATTORI_H
