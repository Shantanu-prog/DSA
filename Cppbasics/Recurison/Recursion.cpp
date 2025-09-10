#include<iostream>
using namespace std;

int factorial1toN(int n)
{
   if(n == 0 || n == 1)
   {
    return 1;
   }
   return n * factorial1toN( n - 1);
}
int main()
{
  int n;
  cin >> n;
  cout << factorial1toN(n);
  return 0;
}