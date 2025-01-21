#include "chef.h"
#include "italianchef.h"

int main() {
    Chef chef("Gordon");
    chef.makeSalad(10);
    chef.makeSoup(9);

    ItalianChef italianChef("Mario");
    italianChef.makeSalad(15);
    italianChef.makeSoup(12);
    italianChef.askSecret("pizza", 4, 2);
    //italianChef.askSecret("wrongpassword", 4, 2);

    return 0;
}

