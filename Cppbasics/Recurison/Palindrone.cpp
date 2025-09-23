#include<iostream>
using namespace std;

bool palindrone( int i, int arr[], int n)
{
   if( i >= n/2) return true;
   if( arr[i] != arr[ n - i - 1]) return false;
   return palindrone( i + 1, arr, n);
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for( int i = 0; i < n; i++) cin >> arr[i];
  cout << boolalpha << palindrone(0, arr, n) << endl;
  return 0;
}
