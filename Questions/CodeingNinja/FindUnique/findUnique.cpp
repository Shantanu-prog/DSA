#include<iostream>
using namespace std;

int findUnique(int *arr, int size) {
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[1000];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << findUnique(arr, n) << endl;
    }
    return 0;
}
