#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while( a > 0 && b > 0)
    {
        if( a > b) a = a % b;
        else b = b % a;
    }
    return ( a == 0 ) ? b : a;
}
int main()
{
    int a, b;
    cout << "enter first number and second number : ";
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}

     //or

#include<bits/stdc++.h>
using namespace std;

int GCD(int n1,int n2) {
       
       n1 = abs(n1);
       n2 = abs(n2);

       while( n2 != 0 )
       {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
       }
       return n1;
    }
int main()
{
    int n1, n2;
    cout << "enter first number and second number : ";
    cin >> n1 >> n2;
    gcd(n1, n2);
    return 0;
}