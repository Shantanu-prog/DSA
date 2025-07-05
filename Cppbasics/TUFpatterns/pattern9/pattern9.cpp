#include<iostream>
using namespace std;

void printnum(int n)
{
    int space = 2 * ( n - 1);
    for(int i = 1; i <= n; i++)
    {     
        //for number
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        //for space
        for(int k = 1; k <= space; k++)
        {
            cout << "  ";
        }
        //for number
        for(int l = i; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << '\n';
        space -= 2;
    }
}
int main()
{
    int n;
    cin >> n;
    printnum(n);
    return 0;
}