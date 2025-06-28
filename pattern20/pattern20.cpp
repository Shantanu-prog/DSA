#include<iostream>
using namespace std;

void printnum(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for (int space = 1; space < i; space++)
        {
            cout << " " << " ";
        }
        for (int j = 1; j <= n - i + 1; j ++)
        {
            cout << i << " ";
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

                //OR

#include<iostream>
using namespace std;

void printnum(int n)
{
    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space < i)
        {
           cout << " " << " ";
           space++;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
          cout << i << " ";
          j++;
        }
        cout << endl;
        i++;
    }
}
int main()
{
    int n;
    cin >> n;
    printnum(n);
    return 0;
}