#include<iostream>
using namespace std;

void printnum(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int space = 1; space <= n - i; space++)
    {
        cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
        cout << i ;
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