#include <iostream>
#include "Person.h"

using namespace std;

class Mother : public Person {
private:
    bool isMarried;

public:
    Mother(string first, string last, int year, int day, int month, bool married)
            : Person(first, last, year, day, month), isMarried(married) {}

    void setMarried(bool married) {
        isMarried = married;
    }

    bool getMarried() const {
        return isMarried;
    }
};

class Grandchild : public Person {
private:
    string favoriteToy;

public:
    Grandchild(string first, string last, int year, int day, int month, string toy)
            : Person(first, last, year, day, month), favoriteToy(toy) {}

    void setFavoriteToy(string toy) {
        favoriteToy = toy;
    }

    string getFavoriteToy() const {
        return favoriteToy;
    }
};

class Child : public Person {
private:
    int gradeLevel;

public:
    Child(string first, string last, int year, int day, int month, int grade)
            : Person(first, last, year, day, month), gradeLevel(grade) {}

    void setGradeLevel(int grade) {
        gradeLevel = grade;
    }

    int getGradeLevel() const {
        return gradeLevel;
    }
};

int main() {
    Mother janeDoe("Jane", "Doe", 1950, 12, 6, true);
    Grandchild jimDoe("Jim", "Doe", 2023, 14, 11, "Firetruck");
    Child joshDoe("Josh", "Doe", 2003, 22, 3, 12);
    Person johnDoe("John", "Doe", 1980, 11, 4);

    cout << "Person: " << johnDoe.getName() << endl;
    cout << "Birthdate: " << johnDoe.getBirthdate() << endl;

    cout << "Mother's Name: " << janeDoe.getName() << endl;
    cout << "Mother's Birthdate: " << janeDoe.getBirthdate() << endl;
    // Used ai to help with line 69
    cout << "Mother's Married Status: " << (janeDoe.getMarried() ? "Married" : "Single") << endl;

    cout << "Child's Name: " << joshDoe.getName() << endl;
    cout << "Child's Birthdate: " << joshDoe.getBirthdate() << endl;
    cout << "Child's Grade Level: " << joshDoe.getGradeLevel() << endl;


    cout << "Grandchild's Name: " << jimDoe.getName() << endl;
    cout << "Grandchild's Birthdate: " << jimDoe.getBirthdate() << endl;
    cout << "Grandchild's Favorite Toy: " << jimDoe.getFavoriteToy() << endl;

    return 0;
}
