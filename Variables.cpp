#include <iostream>

using namespace std;

// variables are names given to a memory block
// Syntax: data_type var_name = value

// rules of variable declaration
/*
1. cannot start with a number
2. can contain characters, numbers and hiphen(-)
3. cannot contain special symbols. e.g @, #, $ etc.
4. cannot use keywords as variable name
5. should begin with an alphabet
6. cannot contain spaces.
7. variables are case sensitive
*/

// datatype specifies the type of information stored in a variable

int main() {
    int age = 10;
    cout << sizeof(age) << endl;

    bool isChild = 1; // 1 - true, 0 - false
    cout << isChild << endl;

    float num = 10.1;
    double salary = 1000.25;
    cout << sizeof(num) << endl;
    cout << sizeof(salary) << endl;
    return 0;
}

// C++ Datatypes
/*
1. Built-in/Primitive - integer, floating, void,
int char float double void

2. Derived - arrays, pointers, references

3. User-defined - structures, classes, unions, enumerations
*/