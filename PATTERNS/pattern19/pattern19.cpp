#include<iostream>
using namespace std;

void printstar(int n)
{   
    for(int i = 1; i <= n; i++)
    {   
        //print space
        for(int space = 1; space < i ; space++)
        {
            cout << " " << " ";
        }
        //print star
        for (int star = 1; star  <= n - i + 1; star++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }   
}
int main()
{
    int n;
    cin >> n;
    printstar(n);
    return 0;
}