#include <iostream>

using namespace std;

/*
1. for loop
for (initialization; condition; update) {
    // code to execute
}

none of the for loop parameters are mandatory
*/

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Insidious " << i << endl;
    }

    int a = 1;
    for (;;) {
        if (a <= 10){
            cout << a << endl;
        }
        else {
            break;
        }
        a++;
    }

    return 0;
}