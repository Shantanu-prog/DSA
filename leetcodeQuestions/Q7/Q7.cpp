//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go 
//outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

#include<iostream>
#include<climits>
using namespace std;

int reverseInteger(int x) {
    int rev = 0;
    while (x != 0) 
    {
        int digit = x % 10;
        if((rev > INT_MAX / 10) || (rev < INT_MIN / 10) ) return 0;
        rev = (rev * 10) + digit;

        x /= 10;
    }
    return rev;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << reverseInteger(n) << '\n';
    }
    return 0;
}
