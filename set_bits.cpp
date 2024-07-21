#include <iostream>

using namespace std;

int main() {
    int n = 15;
    int bits = 0;
    // bruteforce approach
    while (n != 0) {
        if ((n & 1)) bits++;
        n = (n >> 1);
    }
    cout << bits << endl;
    return 0;
}