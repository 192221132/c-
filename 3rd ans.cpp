#include <iostream>
using namespace std;

int main() {
    switch (1) {
        default:
            case 4:
            case 5:
                break;
            case 1:
                continue;
            case 2:
            case 3:
                break;
    }
    return 0;
}

