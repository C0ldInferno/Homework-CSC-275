//
// Created by wadek on 3/17/2024.
//

#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat() : Animal() {}

Cat::Cat(int id, const string& name, const string& shelter) : Animal(id, name, shelter) {}

void Cat::makeSound() {
    cout << "Meow Meow!" << endl;
}
