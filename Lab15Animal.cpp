//
// Created by wadek on 3/17/2024.
//

#include "Animal.h"
using namespace std;

Animal::Animal() : id(0), name(""), shelter("") {}

Animal::Animal(int id, const string& name, const string& shelter) : id(id), name(name), shelter(shelter) {}

int Animal::getId() const {
    return id;
}

void Animal::setId(int id) {
    this->id = id;
}

const string& Animal::getName() const {
    return name;
}

void Animal::setName(const string& name) {
    this->name = name;
}

const string& Animal::getShelter() const {
    return shelter;
}

void Animal::setShelter(const string& shelter) {
    this->shelter = shelter;
}
