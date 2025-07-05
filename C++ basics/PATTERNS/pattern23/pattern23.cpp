#include<iostream>
#include<iomanip>
using namespace std;

void printnum(int n)
{   int count = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int space = 1; space <= n - i; space++)
        {
            cout << setw(4) << " ";
        }
        for (int j = 1; j <= i; j++ )
        {
            cout << setw(4) <<count;
            count++;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printnum(n);
    return 0;
}