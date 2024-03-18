//
// Created by wadek on 3/17/2024.
//

#ifndef LAB15_CAT_H
#define LAB15_CAT_H

#include "Animal.h"
using namespace std;

class Cat : public Animal {
public:
    Cat();
    explicit Cat(int id, const string& name, const string& shelter);

    void makeSound() override;
};


#endif //LAB15_CAT_H
