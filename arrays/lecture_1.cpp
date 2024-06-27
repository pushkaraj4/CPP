#include <iostream>
using namespace std;

int main() {
    // An array is a data structure that holds multiple data of the same type
    // It is a homogenous structure
    // Elements are stored in continous memory locations
    // syntax: dataType arrayName[size];
    int arr[10]; // creates an integer array of 10 size
    char ch[40]; // creates a character array of 40 size
    bool conditions[5]; // creates a boolean array of 5 size

    // when arrays are created, the array name contains the address of first memory address of the array
    // we can access each element of an array using an index
    // an index is an offset of that element from the starting of the array

    int brr[10] = {1, 2, 3};
    fill(brr, brr+10, 10); // syntax: fill(start_address, end_address, value)
    // indexes starts at 0 and ends at n - 1, where n is the size of an array
    cout << brr[0] << " " << brr[1] << endl;

    cout << "enter 5 character: ";
    for (int i = 0; i < 5; i++){
        cin >> ch[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << ch[i];
    }

    return 0;
}