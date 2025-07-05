#include<iostream>
using namespace std;

void printchar(int n)
{
    for(int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - i;
        for(int j = 1; j <= i; j++)
        {
            
             cout << ch << "  ";
             ch++;
        }
           cout << '\n';
    }

}
int main ()
{
    int n;
    cin >> n;
    printchar(n);
    return 0;
}

//OR

#include<iostream>
using namespace std;
void printchar(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(char ch = 'A' + n - 1 - i; ch <= 'A' + n - 1; ch++)
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
    printchar(n);
    return 0;
}
