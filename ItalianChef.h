#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef {
private:
    string password;
    int flour;
    int water;

    int makePizza(int flour, int water);

public:
    ItalianChef(string name);
    ~ItalianChef();
    bool askSecret(string pass, int flour, int water);
};

#endif // ITALIANCHEF_H
