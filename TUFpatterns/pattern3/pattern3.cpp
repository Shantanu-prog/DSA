#include<iostream>
using namespace std;
void printstar(int n)
{
   for(int i = 0; i < n; i++)
   {
       for(int j = 1; j <= n - i; j++)
       {
         cout << j << " ";
       }
       cout << endl;
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
        printstar(n);
    } 
    return 0;
}