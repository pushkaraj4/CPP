#include <iostream>

using namespace std;

int main() {
    // rows = 3
    // columns = 5

    int length = 0, breadth = 0;
    cout << "Length: ";
    cin >> length;
    cout << "Breadth: ";
    cin >> breadth;

    for (int row = 1; row <= length; row++) {
        for (int col = 1; col <= breadth; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}