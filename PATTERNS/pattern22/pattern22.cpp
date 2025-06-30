#include<iostream>
using namespace std;

void printnum(int n)
{
    for(int i = 1; i <= n; i++)
    {
        int space = 1;
        while (space <= i - 1)
        {
            cout << " " << " ";
            space++;
        }
        for(int j = i; j <= n; j++)
        {
            cout << j << " ";
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