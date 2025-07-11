#include<iostream>
using namespace std;

int totalBits( int n )
{
  
    int count = 0;
    while(n != 0)
    {
        if(n & 1)
        {   
             count++;            

        }
        n = n >> 1;
   }
   return count;
}
int bitsAddition (int a, int b)
{ 
    return totalBits(a) + totalBits(b); // total 1s from both
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << bitsAddition(a, b) << endl;
    return 0;
}