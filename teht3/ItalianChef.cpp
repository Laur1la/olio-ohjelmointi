#include "italianchef.h"

ItalianChef::ItalianChef(string name) : Chef(name), password("pizza"), flour(0), water(0) {
    cout << "Italian Chef " << chefName << " is ready to cook Italian dishes!" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "Italian Chef " << chefName << " is done cooking!" << endl;
}

bool ItalianChef::askSecret(string pass, int flour, int water) {
    if (pass == password) {
        int pizzas = makePizza(flour, water);
        cout << "Italian Chef " << chefName << " made " << pizzas << " pizzas." << endl;
        return true;
    } else {
        cout << "Incorrect password!" << endl;
        return false;
    }
}

int ItalianChef::makePizza(int flour, int water) {
    int pizzas = min(flour / 2, water / 1);
    return pizzas;
}
