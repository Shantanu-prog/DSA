#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int rev = 0;
  while (n > 0)
  {
     int lastdgit = n % 10;
     rev = ( rev * 10 ) + lastdgit;
     n /= 10;
  }
  cout << rev << " " << endl;
  return 0;
}
