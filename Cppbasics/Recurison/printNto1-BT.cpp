#include<iostream>
using namespace std;

void printNto1_BT(int i, int n)
{
  if( i > n ) return;
  printNto1_BT( i + 1, n);
  cout << i << " ";
}
int main()
{
  int n;
  cin >> n;
  printNto1_BT(1, n);
  return 0;
}