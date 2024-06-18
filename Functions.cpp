#include <iostream>
#include <math.h>
using namespace std;

int sum(int a, int b) {
    int totalSum = a + b;
    return totalSum;
}

bool prime(int n) {
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int getSum(int x, int y); // function declaration

int main() {
    int ans = getSum(5, 10); // function call
    // cout << ans << endl;

    for (int i = 1; i <= 100; i++) {
        if (prime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}

int getSum(int x, int y) { // function definition
    return x+y;
}