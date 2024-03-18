#include "Horse.h"
#include "Cat.h"

using namespace std;

int main() {
    Horse horse1(1, "Harold", "Stable");
    Cat cat1(2, "Megatron", "House");

    horse1.makeSound();
    cat1.makeSound();

    return 0;
}
