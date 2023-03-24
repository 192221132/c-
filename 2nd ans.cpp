#include <iostream>
using namespace std;

int main() {
    int num[] = {1, 2, 3, 4, 5, 6, 7};
    num[1] = num[1] ? cout << "success" : cout << "error";
    return 0;
}


