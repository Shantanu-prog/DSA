#include<iostream>
using namespace std;

int functionalWay(int n)
{
  if( n == 0 )
  {
    return 0;
  }
  return n + functionalWay(n - 1);
}
int main()
{
  int n;
  cin >> n;
  cout << functionalWay(n) << endl;
  return 0;
} 