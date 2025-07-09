#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a" << '\n';
    cin >> a;

    cout << "Enter the value of b" << '\n';
    cin >> b;

    char op;
    cout << "Enter the operation you want to perform" << endl;
    cin >> op;

    switch ( op )
    {
        case '+': cout << ( a + b ) << '\n';
        break;

        case '-': cout << ( a - b ) << '\n';
        break;

        case '*': cout << ( a * b ) << '\n';
        break;

        case '/': cout << ( a / b) << '\n';
        break;

        case '%': cout << (a % b) << '\n';
        break;

        default : cout << "Enter a valid number" << '\n';

    }
} 