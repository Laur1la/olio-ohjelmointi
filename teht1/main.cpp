#include <iostream>
#include <cstdlib>
using namespace std;

int satunnaisluku;

int main()
{
    srand(time(0)); // Asetetaan siemenluku ajasta
    satunnaisluku = rand() % 20 + 1; // Satunnaisluku väliltä 1-20

    int arvaus;
    bool oikein = false;

    while (!oikein) {
        cout << "Arvaa luku (1-20): ";
        cin >> arvaus;

        if (arvaus < satunnaisluku) {
            cout << "Luku on suurempi" << endl;
        } else if (arvaus > satunnaisluku) {
            cout << "Luku on pienempi" << endl;
        } else {
            cout << "Oikea vastaus!" << endl;
            oikein = true;
        }
    }
    return 0;
}
