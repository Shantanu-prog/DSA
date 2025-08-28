#include<bits/stdc++.h>
using namespace std;

int digitcount(int n)
{  
    if( n == 0) return 1;

    int count = 0;
    while (n > 0)
    {
      int ld = n % 10;
      count++;
      n /= 10;   
    }
    return count;  
}

int main(){
    int n;
    cin >> n;
    cout << digitcount(n);
    return 0;
}