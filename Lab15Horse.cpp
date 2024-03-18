//
// Created by wadek on 3/17/2024.
//

#include "Horse.h"
#include <iostream>
using namespace std;

Horse::Horse() : Animal() {}

Horse::Horse(int id, const string& name, const string& shelter) : Animal(id, name, shelter) {}

void Horse::makeSound() {
    cout << "Neigh Neigh!" << endl;
}
