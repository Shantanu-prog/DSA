#include<iostream>
using namespace std;

void printchar(int n)
{
 for(int i = 1; i <= n; i++)
 {
    for(int j = 1; j <= i; j++)
    {
        char ch = ('A' + n - i + j - 1);
        cout << ch;
    }
    cout <<endl;
 }   
}
int main()
{
    int n;
    cin >> n;
    printchar(n);
    return 0;
}