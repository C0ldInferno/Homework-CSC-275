//
// Created by wadek on 3/17/2024.
//

#ifndef LAB15_ANIMAL_H
#define LAB15_ANIMAL_H

#include <string>
using namespace std;

class Animal {
protected:
    int id;
    string name;
    string shelter;

public:
    Animal();
    Animal(int id, const string& name, const string& shelter);

    int getId() const;
    void setId(int id);

    const string& getName() const;
    void setName(const string& name);

    const string& getShelter() const;
    void setShelter(const string& shelter);

    virtual void makeSound() = 0;
};

#endif //LAB15_ANIMAL_H
