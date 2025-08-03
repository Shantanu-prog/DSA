#include<bits/stdc++.h>
using namespace std;

void isPrime(int n)
{   
    if(n <= 1) {
        cout << n << " is not prime " << endl;
        return;
    }
    
    int cnt = 0;
    for(int i = 1; i * i <= n; i++)
    {
       if(n % i == 0) {
           cnt++;                    // Count i
           if(i != n / i) {          // Only count n/i if it's different
               cnt++;
           }
       }
    }
    
    if(cnt == 2) cout << n << " is prime " << endl;
    else cout << n << " is not prime " << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        isPrime(n);
    }
    return 0;
}