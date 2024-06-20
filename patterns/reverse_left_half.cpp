#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int row = 0; row < n; row++) {
        for (int j = 0; j < row; j++) {
            cout << "  ";
        }
        for (int k = n; k > row; k--) {
            cout << "* ";
        }
        cout << endl;
    }
}