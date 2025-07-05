#include<iostream>
using namespace std;

void prime(int n)
{
    for(int i = 2; i <= n; i++)
    {
        if( n % i == 0) //rem = 0
        {
            cout << "This is not a prime number" << '\n';
            break; //it will stop or end the loop if condition is true
        }
        else 
        {
            cout << "its a prime number" << '\n';
        }
    }
}
int main()
{
    int n;
    cin >> n;
    prime(n);
    return 0;
}