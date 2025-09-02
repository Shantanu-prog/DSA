#include<iostream>
using namespace std;

void printNto1(int i, int n)
{
  if( i >= n ) return ;
  cout << ( n ) << " ";
  printNto1(i, n - 1);
}

int main()
{
  int n;
  cin >> n;
  printNto1(0, n);
  return 0;
}