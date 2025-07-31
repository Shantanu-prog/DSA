#include<iostream>
using namespace std;

int FindNumberOfDigits(int n)
{
    if( n == 0 ) return 1;
     int cnt = 0;
     while( n > 0)
     {
        n /= 10;
        cnt++;
     }
   return cnt;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << FindNumberOfDigits(n) << endl;
    }
    return 0;
}