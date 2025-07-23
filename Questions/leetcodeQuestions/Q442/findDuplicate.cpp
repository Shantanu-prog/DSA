#include<iostream>
using namespace std;

int findDuplicate(int *arr, int size)
{
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[1000];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findDuplicate(arr, n) << endl;
    }
    return 0;
}