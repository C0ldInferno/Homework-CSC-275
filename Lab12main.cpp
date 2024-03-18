#include <iostream>
#include "kadenwaVec.h"

using namespace std;
using namespace kadenwa;

int main() {
    Vec v1;
    Vec v2(3, 4);

    cout << "v1: ";
    v1.display();
    cout << endl;

    cout << "v2: ";
    v2.display();
    cout << endl;

    cout << "v2.x: " << v2.getX() << endl;
    cout << "v2.y: " << v2.getY() << endl;

    Vec v3 = v1 + v2;
    Vec v4 = v2 - v1;
    Vec v5 = -v2;

    cout << "v1 + v2: ";
    v3.display();
    cout << endl;

    cout << "v2 - v1: ";
    v4.display();
    cout << endl;

    cout << "-v2: ";
    v5.display();
    cout << endl;

    cout << "Equality between v1 and v2: ";
    v1.displayEquality(v2);
    cout << endl;

    return 0;
}
