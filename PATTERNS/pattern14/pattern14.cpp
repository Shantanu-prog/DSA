#include<iostream>
using namespace std;

void printchar(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }  
}

int main()
{
    int n;
    cin >> n;
    printchar(n);
    return 0;
}
