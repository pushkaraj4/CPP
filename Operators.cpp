#include <iostream>

using namespace std;

int main() {
    int a = 5;
    cout << ++a << endl; // Pre-increment -> first increment the value then use it

    int b = 5;
    cout << b++ << endl; // Post-increment -> first use the value then increment it
    cout << b << endl;

    int num = 10;
    cout << --num << endl; // Pre-decrement

    int age = 20;
    cout << num-- << endl; // Post-decrement
    cout << num << endl;

    cout << (5 << 1);
}