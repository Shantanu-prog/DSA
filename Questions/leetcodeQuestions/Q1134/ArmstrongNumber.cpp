//Given an integer n, return true if and only if it is an Armstrong number.

//A k-digit number n (in base 10) is an Armstrong number if the sum 
//of its digits each raised to the power k is equal to n.

#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n)
{
   int temp = n;
   int power = 0;
   int ori = n;
   //count digits
   while( temp > 0)
   {
    power++;
    temp /= 10;
   }

   //calcute sum with temp^power
   int sum = 0;
   temp = n;
   while( temp != 0 )
   {
      int ld = temp % 10;
      sum = sum + round(pow(ld, power));
      temp /= 10;
   }
   return sum == ori;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << boolalpha << isArmstrong(n) << endl;
    }
    return 0;
}