#include<iostream>
using namespace std;

void printnum(int n)
{
    int start = 1;
    for(int i = 0; i < n; i++)
    {  
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <=i; j++)
        {
            cout << start << " ";
            start = 1 - start;
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
        printnum(n);
    }
    return 0;
}