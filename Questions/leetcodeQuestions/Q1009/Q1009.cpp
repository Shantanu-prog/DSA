// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

#include<iostream>
using namespace std;

int bitwiseComplement(int n)
{
    int m = n;
    int mask = 0;

    if(n == 0) return 0;

    while(n != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << bitwiseComplement(n) << '\n';
    }
   return 0; 
}