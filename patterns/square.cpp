#include <iostream>
using namespace std;

int main() {
// total rows = 4
// every row = 4 star

// row = outter
// col = inner

    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 4; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}