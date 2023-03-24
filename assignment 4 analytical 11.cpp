#include <iostream>

using namespace std;

class Base {
public:
    int i;

    Base(int i = 0) : i(i) {}

    void printNum() {
        cout << "Base class: i = " << i << endl;
    }
};

class Subclass : public Base {
public:
    int j;

    Subclass(int i = 0, int j = 0) : Base(i), j(j) {}

    void printNum() {
        cout << "Subclass: i = " << i << ", j = " << j << endl;
    }
};

int main() {
    Subclass obj(10, 20);

    obj.printNum();  // calls the printNum() function of Subclass
    
    return 0;
}

