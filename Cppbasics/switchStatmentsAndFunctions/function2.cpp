#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact *= 1;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int deno = factorial(r) * factorial(n-r);

    return  num/deno;
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n,r) << '\n';
    return 0;
}