//
// Created by wadek on 3/17/2024.
//

#ifndef LAB12_KADENWAVEC_H
#define LAB12_KADENWAVEC_H
#include <iostream>

namespace kadenwa {
    class Vec {
    private:
        int x;
        int y;

    public:
        Vec() : x(0), y(0) {}

        Vec(int x_val, int y_val) : x(x_val), y(y_val) {}

        int getX() const { return x; }

        int getY() const { return y; }

        void setX(int x_val) { x = x_val; }

        void setY(int y_val) { y = y_val; }

        void display() const;

        void displayEquality(const Vec &v) const;

        Vec operator+(const Vec &v) const {
            return Vec(x + v.x, y + v.y);
        }

        Vec operator-(const Vec &v) const {
            return Vec(x - v.x, y - v.y);
        }

        Vec operator-() const {
            return Vec(-x, -y);
        }

        bool operator==(const Vec &v) const {
            return (x == v.x) && (y == v.y);
        }
    };
}


#endif //LAB12_KADENWAVEC_H
