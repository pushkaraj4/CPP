#include <iostream>

using namespace std;

int main() {
    int n = 5;
    for (int row = 0; row < n; row++) {
        for (int j = 0; j < n - row - 1; j++) {
            cout << "  ";
        }
        for (int k = 0; k <= row; k++) {
            cout << "* ";
        }
        cout << endl;
    }
}