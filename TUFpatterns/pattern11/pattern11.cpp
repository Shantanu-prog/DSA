#include<iostream>
using namespace std;

void printnum(int n)
{
    for(int i = 1; i <= n; i++)
    {
        // space
        for(int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        // characters
        char ch = 'A';
        int breakpoint = i; // The peak position of the character

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch << " ";
            if(j < breakpoint) ch++;
            else ch--;
        }

        // space (optional for symmetry)
        for(int j = 1; j <= n - i; j++)
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