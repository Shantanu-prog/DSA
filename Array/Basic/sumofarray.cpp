#include<iostream>
using namespace std;

int sumOfArray(int arr[], int n)
{
  
   int sum = 0;
   cout << " Enter array element " << endl;
   for(int i = 0; i < n; i++)
   {
    cin >> arr[i]; 
    sum += arr[i];
   }
   return sum;
}
int main()
{
    int n;
    cout << "Enter size of array : "<< endl;
    cin >> n;
    int arr[100];
    cout << "sum of array element is : " <<  sumOfArray(arr, n) << endl;
    return 0;
}