#include<iostream>
using namespace std;

void printstar(int n)
{
     int spc = 2 * (n - 1);
    for(int i = 1; i <= 2 * n - 1; i++)
    {  
        int star = i;
        if(i > n) star = 2 * n - i;
        //left star
        for(int str = 1; str <= star; str++)
        {
            cout << "* ";
        }
        //space
        for(int j= 1; j <= spc; j++)
        {
            cout << "  ";
        }
        //right star
        for(int str = 1; str <= star; str++)
        {
            cout << "* ";
        }
        cout << '\n';
        if(i < n) spc -= 2;
        else spc += 2;
    }
}
int main()
{
    int n;
    cin >> n;
    printstar(n);
    return 0;
}