#include<iostream>
#include <climits>
using namespace std;

 bool isPalindrome(int n) {
    if( n < 0 ) return 0;
    int rev = 0;
    int dup = n;
    while( n != 0 )
    {
        int lsd = n % 10;
        if( rev > INT32_MAX/10) return 0;
        rev = (rev * 10) + lsd;
        n /= 10;
    }
    if( rev = dup ) return true;
    else return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << boolalpha <<isPalindrome(n) << endl;
    }
    return 0;
}