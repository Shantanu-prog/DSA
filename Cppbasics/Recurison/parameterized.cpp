#include<iostream>
using namespace std;

void Parameterized(int i, int sum)
{
  if( i < 1)
  {
    cout << (sum);
    return;
  }
  Parameterized(i - 1, sum + i);
}
int main()
{
  int n;
  cin >> n;
  Parameterized(n, 0);
  return 0;
}