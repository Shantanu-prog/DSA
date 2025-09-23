#include<iostream>

using namespace std;

void ReverseArrary(int i, int arr[], int n){
   if(i >= n/2) return;
   swap(arr[i], arr[n - i - 1]);
   ReverseArrary(i + 1, arr, n);
}
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  ReverseArrary(0, arr, n);
  for(int i = 0; i < n ; i++) cout << arr[i] << " ";
  return 0;
}

      //or

void Reverse(int arr[], int l, int r)
{
  if (l >= r) return;
  swap(arr[l], arr[r]);
  Reverse(arr, l + 1, r - 1);
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  Reverse(arr, 0, n - 1);
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  return 0;
}