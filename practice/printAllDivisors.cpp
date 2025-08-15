#include<iostream>
#include<vector>
using namespace std;

void printDivisors(int n) {
    vector<int> left, right;
    
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            left.push_back(i);           // Smaller divisors
            if(i != n/i) {
                right.push_back(n/i);    // Larger divisors
            }
        }
    }
    
    // Print smaller divisors (already in ascending order)
    for(int x : left) cout << x << " ";
    
    // Print larger divisors in reverse (to get ascending order)
    for(int i = right.size()-1; i >= 0; i--) {
        cout << right[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}