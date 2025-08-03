#include<bits/stdc++.h>
using namespace std;

void PrintAllDivisor(int n)
{
    vector <int> ls;
     for (int i = 1; i <= sqrt(n); i++)
     {
        if( n % i == 0)
        {
           ls.push_back(i);
           if(( n / i ) != i ) ls.push_back( n / i ); 
        }
     }
     sort(ls.begin(), ls.end());
     for(auto it : ls) cout << it << " ";
     cout << endl;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        PrintAllDivisor(n); 
    }
    return 0;
}