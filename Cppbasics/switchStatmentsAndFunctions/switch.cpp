#include<iostream>
using namespace std;

int main()
{
    int ch = 1;

    cout << endl;
    switch ( ch )
    {
         case 1: cout << "First" << '\n';
         break;

         case 2: cout << "second" << '\n';
         break;

         default: cout << "It is default case" << '\n';

    }
    cout << '\n';

    return 0;
}