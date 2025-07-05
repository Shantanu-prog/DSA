#include<iostream>
using namespace std;

void printstar1(int n)
{
    for(int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << "  ";
        }
        for(int star = 0; star < 2 * i + 1; star++)
        {
            cout << "* ";
        }
       for (int space = 0; space < n - i - 1; space++)
        {
            cout << "  ";
        }
        cout << '\n';
    }
}
void printstar2(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for(int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "* ";
        }
        for(int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        cout << '\n';
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
          int n;
          cin >> n;
          printstar1(n);
          printstar2(n);
    }
    return 0;
}