#include <iostream>
#define pi 3.14

int squareArea(int&);
int circleArea(int&);

int main() {
    int a = 10;
    std::cout << squareArea(a);
    std::cout << circleArea(a);
    std::cout << a << std::endl;
    return 0;
}

int squareArea(int &a) {
    return a * a;
}

int circleArea(int &a) {
    return pi * a * a;
}

