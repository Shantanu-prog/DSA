#include<iostream>
using namespace std;

void printstar1(int n)
{
    for(int i = 1; i <= 2 * n - 1; i++)
    {  
         int star = i;
        if (i > n) star = 2 * n - i;
        for(int j = 1; j <= star ; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        printstar1(n);
    }
    return 0;
}