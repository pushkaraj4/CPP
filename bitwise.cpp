#include <iostream>

using namespace std;

// bitwise operators wotk at bit level
int main() {
    // bitwise AND (&) -> 1 & 1 =  1, otherwise 0
    // cout << "Bitwise AND" << endl;
    // cout << (5 & 3) << endl;
    // cout << (5 & 5) << endl;
    // cout << (5 & 1) << endl << endl;
    
    // bitwise OR (|) -> 0 | 0 = 0, otherwise 1
    // cout << "Bitwise OR" << endl;
    // cout << (5 | 3) << endl;
    // cout << (5 | 5) << endl;
    // cout << (5 | 1) << endl << endl;

    // cout << "Another approach to check if number is odd or even" << endl;
    // int n;
    // cin >> n;
    // if (n & 1) cout << "ODD";
    // else cout << "EVEN";

    // cout << ~(10) << endl;

    int arr[] = {3,8,7,4,12,4,3,12,8};
    // cout << (3 ^ 8 ^ 7 ^ 4 ^ 4 ^ 12 ^ 3 ^12 ^8);
    // int ans = arr[0];
    // for (int i = 1; i < sizeof(arr)/sizeof(int); i++) {
    //     ans ^= arr[i];
    // }
    // cout << ans;

    // corner cases
    cout << (1 << 31);
    return 0;
}