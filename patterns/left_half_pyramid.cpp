#include <iostream>

using namespace std;

int main() {
    for (int row = 0; row < 5; row++) {
        for (int col = 5; col >= 0; col--) {
            cout << "  ";
        }
        for (int k = 0; k < row; k++) {
            cout << "* ";
        }
        cout << endl;
    }
}