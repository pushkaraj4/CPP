#include <iostream>

using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < i; k++) {
            cout << "  ";
        }
        for (int j = 0; j < n - i + 2; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}