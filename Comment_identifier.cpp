
#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    int b = a.size();

    if (b >= 4 && a[0] == '/' && a[1] == '*' && a[b - 1] == '/' && a[b - 2] == '*') {
        cout << "It is a comment" << endl;
    } else {
        cout << "It is not a comment" << endl;
    }

    return 0;
}