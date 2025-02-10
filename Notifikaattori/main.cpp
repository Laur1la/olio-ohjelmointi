#include "Notifikaattori.h"
#include "Seuraaja.h"
#include <iostream>


int main() {
    Notifikaattori notifikaattori;

    Seuraaja* seuraajaA = new Seuraaja("A");
    Seuraaja* seuraajaB = new Seuraaja("B");

    notifikaattori.lisaa(seuraajaA);
    notifikaattori.lisaa(seuraajaB);

    notifikaattori.tulosta();

    notifikaattori.postita("Tama on testiviesti");

    notifikaattori.poista(seuraajaA);

    notifikaattori.tulosta();

    delete seuraajaA;
    delete seuraajaB;

    return 0;
}
