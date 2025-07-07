//Subtract the Product and Sum of Digits of an Integer

#include<iostream>
using namespace std;

int prodsum(int n)
{
    int prod=1,sum=0;
    for(;n>0;n/=10){
        int digit=n%10;
        prod*=digit;
        sum+=digit;
    }
    return prod-sum;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout << prodsum(n) << endl;
    }
}