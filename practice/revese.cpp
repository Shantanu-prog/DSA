#include<iostream>
using namespace std;

int reverseNum (int n)
{
    int rev = 0;
    while( n > 0)
    {
        int ld = n % 10;
        n /= 10;
        rev = ( rev * 10 ) + ld;
    }
    return rev;
}

int main()
{
  int n;
  cin >> n;
  cout << reverseNum(n) << endl;
  return 0;
}