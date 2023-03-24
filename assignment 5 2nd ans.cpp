#include <iostream>

using namespace std;

int main() {
    // Print square star pattern
    cout << "Square Star Pattern:\n";
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Print rectangle dollar pattern
    cout << "\nRectangle Dollar Pattern:\n";
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 8; j++) {
            if(i == 1 || i == 4 || j == 1 || j == 8) {
                cout << "$";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

