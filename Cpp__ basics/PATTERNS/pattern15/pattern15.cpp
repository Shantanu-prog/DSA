#include<iostream>
using namespace std;

void printalpha(int n)
{
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        char ch = ('A' + i + j - 2);
        cout << ch << " ";
      }
      cout << endl;
    }
    
}
int main()
{
    int n;
    cin >> n;
    printalpha(n);
    return 0;
}