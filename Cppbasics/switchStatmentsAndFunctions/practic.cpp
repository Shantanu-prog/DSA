#include<iostream>
using namespace std;

void update(int a)
{
  a = a/2;
}
int update1(int a)
{
    a -= 5;
    return a;
}
int update2(int a)
{
    int ans = a*a;
    return ans;
}

int main()
{
    int a = 14;
    update2(a);
    cout << a << endl;
    return 0;
}