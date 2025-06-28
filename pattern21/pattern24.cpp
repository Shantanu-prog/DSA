#include<iostream>
using namespace std;

void printnum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Print spaces before numbers
        for (int space = 1; space <= n - i; space++)
        {
            cout << "  "; // two spaces for better alignment
        }

        // Increasing numbers from 1 to i
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        // Decreasing numbers from i-1 to 1
        for (int j = i - 1; j >= 1; j--)
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
