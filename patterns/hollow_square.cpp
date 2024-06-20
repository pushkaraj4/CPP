#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cout << "Enter side: ";
    cin >> n;
    // Approach 1
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row == 0 || row == n-1) {
                cout << "* ";
            }
            else {
                if (col == 0 || col == n-1) {
                    cout << "* ";
                }
                else {
                    cout << "  "; 
                }
            }
        }
        cout << endl;
    }

    // Approach 2
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row == 0 || row == n-1 || col == 0 || col == n-1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}