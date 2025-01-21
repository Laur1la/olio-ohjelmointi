#include "chef.h"

Chef::Chef(string name) : chefName(name) {
    cout << "Chef " << chefName << " is ready to cook!" << endl;
}

Chef::~Chef() {
    cout << "Chef " << chefName << " is done cooking!" << endl;
}

string Chef::getName() {
    return chefName;
}

int Chef::makeSalad(int ingredients) {
    int servings = ingredients / 5;
    cout << "Chef " << chefName << " made " << servings << " servings of salad." << endl;
    return servings;
}

int Chef::makeSoup(int ingredients) {
    int servings = ingredients / 3;
    cout << "Chef " << chefName << " made " << servings << " servings of soup." << endl;
    return servings;
}
