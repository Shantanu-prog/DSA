#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int n)
{   
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + static_cast<int>(pow(2, i)); // cast to int
        }
        n = n / 10;
        i++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n) << '\n';
    return 0;
}
