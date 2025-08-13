#include<iostream>
#include<cmath>
using namespace std;

bool armstrong( int n )
{
  int temp = n;
  int power = 0;

  //count digits;
  while( temp > 0 )
  {
    power++;
    temp /=  10;
  }
  int sum = 0;
  temp = n;
  while( temp != 0)
  {
    int ld = temp % 10;
    sum = sum + pow( ld, power);
    temp /= 10;
  } 
  return sum == n;
}
int main()
{
  int n;
  cin >> n;
  cout << boolalpha << armstrong(n) << endl;
  return 0;
}