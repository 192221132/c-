#include <iostream>
#include <string>

using namespace std;

int main() {
    string username, re_username;
    
    // Get input from user
    cout << "Enter the username: ";
    cin >> username;
    cout << "Re-enter the username: ";
    cin >> re_username;
    
    // Check if the two usernames match
    if(username != re_username) {
        cout << "Usernames do not match!\n";
        return 0;
    }
    
    // Check if the username is valid
    bool isValid = true;
    for(int i = 0; i < username.length(); i++) {
        char c = username[i];
        if(!isalnum(c) && c != '_' && c != '-') {
            isValid = false;
            break;
        }
    }
    
    // Print the result
    if(isValid) {
        cout << "Username is valid.\n";
    } else {
        cout << "Username is invalid.\n";
    }
    
    return 0;
}

