//
// Created by wadek on 3/17/2024.
//

#ifndef LAB15_HORSE_H
#define LAB15_HORSE_H

#include "Animal.h"
using namespace std;

class Horse : public Animal {
public:
    Horse();
    explicit Horse(int id, const string& name, const string& shelter);

    void makeSound() override;
};


#endif //LAB15_HORSE_H
