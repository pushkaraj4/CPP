#include <iostream>

using namespace std;

int main() {
    int age = 21;
    cout << age << endl;

    char ch = 'abcd'; // declare characters in single quotes
    // if we store more than 1 characters in char, only last character will be stored
    // since char is 8-bit, it will automatically override the previous characters and store the last one. 
    cout << ch << endl;

    float pi = 3.14;
    double area = 2 * 2 * 3.14;

    cout << pi << endl;
    cout << area << endl;
    cout << sizeof(pi) << " " << sizeof(area) << endl;
    cout << sizeof(ch) << endl;

    // if we store values that are out of range, it will be stored in circula way.
    short value = 32769;
    cout << value << endl;
    return 0;
}