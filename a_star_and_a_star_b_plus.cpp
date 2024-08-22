#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[20];
    cin.getline(a, sizeof(a));
    int x = strlen(a);
    int state = 0;

    for (int i = 0; i < x; i++) {
        if (state == 0) {
            if (a[i] == 'a') {
                state = 0;  // Stay in state 0 for 'a'
            } else if (a[i] == 'b') {
                state = 1;  // Move to state 1 for 'b'
            } else {
                state = 3;  // Invalid character
                break;
            }
        } else if (state == 1) {
            if (a[i] == 'a') {
                state = 2;  // Move to state 2 for 'a'
            } else if (a[i] == 'b') {
                state = 1;  // Stay in state 1 for 'b'
            } else {
                state = 3;  // Invalid character
                break;
            }
        } else if (state == 2) {
            if (a[i] == 'a') {
                state = 2;  // Stay in state 2 for 'a'
            } else if (a[i] == 'b') {
                state = 1;  // Move back to state 1 for 'b'
            } else {
                state = 3;  // Invalid character
                break;
            }
        }
    }

    if (state == 0) {
        cout << "it's under a*" << endl;
    } else if (state == 1) {
        cout << "it's under a*b+" << endl;
    } else {
        cout << "not accepted" << endl;
    }

    return 0;
}
