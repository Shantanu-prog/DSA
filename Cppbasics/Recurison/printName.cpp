#include<bits/stdc++.h>
using namespace std;

void PrintName(int i, int n)
{
   if( i > n ) return;
   cout << "shantanu" << endl;
   PrintName(i + 1, n);
}
int main()
{
  int n;
  cin >> n;
  PrintName(1, n);
  return 0;
}