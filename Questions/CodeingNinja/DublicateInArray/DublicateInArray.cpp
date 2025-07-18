#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
    // Simple approach: check each element against all others
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                return arr[i];  // Return the duplicate element
            }
        }
    }
    return -1;  // No duplicate found
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[100];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << findDuplicate(arr, n) << endl;
    }
    return 0;
}