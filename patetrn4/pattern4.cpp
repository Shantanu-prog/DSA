#include<iostream>
using namespace std;

void printnum(int n)
{
    for(int i = 0; i < n; i++)
    {
        for (int space = 0; space <= n - i - 1; space++)
        {
            cout << "  ";
        }
        for(int star = 0; star < 2 * i + 1; star++)
        {
            cout << "* ";
        }
       for (int space = 0; space <= n - i - 1; space++)
        {
            cout << "  ";
        }
        cout << '\n';
    }
}
int main()
{
    int n;
    cin >> n;
    printnum(n);
    return 0;
}