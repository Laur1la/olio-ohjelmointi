#include <iostream>
#include <cstdlib>
using namespace std;

int game(int maxnum);

int main()
{
    srand(time(0));
    const int maxnum = 40;
    int arvaustenLkm = game(maxnum);
    cout << "Arvauksia yht: " << arvaustenLkm << endl;
    return 0;
}

int game(int maxnum){
    int satunnaisluku = rand() % maxnum + 1;
    int arvaus;
    int arvaustenLkm = 0;

    while (true) {
        cout << "Arvaa luku (1 - "<< maxnum << "): ";
        cin >> arvaus;
        arvaustenLkm++;

        if (arvaus < satunnaisluku) {
            cout << "Luku on suurempi" << endl;
        } else if (arvaus > satunnaisluku) {
            cout << "Luku on pienempi" << endl;
        } else {
            cout << "Oikea vastaus!" << endl;
            return arvaustenLkm;
        }
    }
}
