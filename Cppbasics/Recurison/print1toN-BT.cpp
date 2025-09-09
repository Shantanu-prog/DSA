#include <iostream>
using namespace std;

void Print1toN_BT(int i, int n)
{
   if( i < 1 ) return;
   Print1toN_BT(i - 1, n);
   cout << i << " ";
}
int main()
{
  int n;
  cin >> n;
  Print1toN_BT(n, n);
  return 0;
}
