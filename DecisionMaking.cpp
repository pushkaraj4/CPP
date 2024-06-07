#include <iostream>
#include <sstream>
using namespace std;

/*
Conditional statements are used to change the flow of program depending on the condition

1. if statement
if (condition) {
    // statements...
}
if condition is true, block of if is executed. otherwise it will be skipped

2. if-else statement
if (condition) {
    // statements
}
else {
    // other statements
}
if condition is true, block of if is executed. otherwise else block will be executed

3. 
*/

int main() {
    int budget;
    cin >> budget;
    if (budget > 200000){
        cout << "Buy toyota" << endl;
    }
    if (budget > 500000) {
        cout << "Something" << endl;
    }
    if (budget > 1000000) {
        cout << "Something else" << endl;
    }
    string str = "vedant";
    cout << str;
    return 0;
}