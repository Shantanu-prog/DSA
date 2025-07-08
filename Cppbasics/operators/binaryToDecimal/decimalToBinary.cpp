#include<iostream>
using namespace std;

long long decimalToBinary(int a)
{
    if (a == 0) return 0;
    
    long long ans = 0;
    long long multiplier = 1;
    
    while(a != 0)
    {
        int bit = a & 1;
        ans = ans + (bit * multiplier);
        multiplier *= 10;
        a = a >> 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << decimalToBinary(n) << endl;
    return 0;
}