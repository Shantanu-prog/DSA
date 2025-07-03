#include<iostream>
using namespace std;

void printnum(int n)
{ 

    for(int i = 1; i <= n; i++)
    {
        for(char ch = 'A'; ch < 'A' + (n - i + 1); ch++)
        {
           cout << ch << " ";
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