#include <iostream>
using namespace std;

bool uniqueOccurrences(int* arr, int arrSize) {
    // Debug: Print the input array
    cout << "Array: ";
    for(int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int count;
    int k = 0;
    int arr2[1000];
    bool visited[1000] = {false};

    for(int i = 0; i < arrSize; i++) {
        if (visited[i]) continue;

        count = 1;
        visited[i] = true;
        
        // Count occurrences of arr[i] in the rest of the array
        for(int j = i + 1; j < arrSize; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = true;  // Mark this index as visited
            }
        }
        arr2[k++] = count;
    }

    // Debug output
    cout << "Counts: ";
    for(int i = 0; i < k; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Check for duplicate counts
    for(int i = 0; i < k; i++) {
        for(int j = i + 1; j < k; j++) {
            if(arr2[i] == arr2[j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[1000];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool res = uniqueOccurrences(arr, n);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}

