#include <iostream>
#include "pankkitili.h"
using namespace std;

int main()
{
    Pankkitili tili1("Anna Virtanen","1111",1000.5);
    Pankkitili tili2("Veijo Virtanen","2222",100.0);
    cout<<"Tulostetaan tilitiedot"<<endl;
        std::cout << "Alkutilanne:\n";
        tili1.tulostaTilitiedot();
        tili2.tulostaTilitiedot();

    cout<<"Suoritetaan toimintoja"<<endl;
        tili1.tallete(200.0);
        tili2.nosta (100.0);
        tili1.siirra(tili2, 150.0);

    cout<<"Tulostetaan tilitiedot uudelleen"<<endl;
    cout<< "Tilanne toimintojen jälkeen: "<<endl;
        tili1.tulostaTilitiedot();
        tili2.tulostaTilitiedot();
    return 0;
}
