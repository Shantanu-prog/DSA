#include<iostream>
using namespace std;

bool plaindrom(int n)
{
   int rev = 0;
   int original = n;
   while (n != 0)
   {
    int lsd = n % 10;
    rev = ( rev * 10 ) + lsd;
     n /= 10;
   }
   if( rev == original) return 1;
   else return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << boolalpha << plaindrom(n) << endl;
    return 0;
}