#include<iostream>
using namespace std;

void printstar(int n)
{
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(i == 0 || j == 0 || i == n || j == n )
            {
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << '\n';
    }
}
int main()
{
    int n;
    cin >> n;
    printstar(n);
    return 0;
}