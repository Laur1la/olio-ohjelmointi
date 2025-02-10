#ifndef SEURAAJA_H
#define SEURAAJA_H
using namespace std;
#include <string>

class Seuraaja {
public:
    Seuraaja(string nimi);
    string getNimi() const;
    void paivitys(const string& viesti);

    Seuraaja* next = nullptr;

private:
    string nimi;
};

#endif // SEURAAJA_H
