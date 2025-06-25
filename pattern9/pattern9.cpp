// #include<iostream>
// using namespace std;

// void printchar(int n)
// {
//   for(int i = 1; i <=n; i++)
//   {
//     for(int j = 1; j <=n; j++)
//     {   
//         char ch = ('A' + i - 1);
//         cout <<  ch << " ";
//     }
//     cout << endl;
//   }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     printchar(n);
//     return 0;
// }

#include<iostream>
using namespace std;

void printalpha(int n)
{
 int i = 1;
 while (i <= n)
 {
    int j = 1;
    while (j <= n)
    {
        char ch = ('A' + i - 1);
        cout << ch << " ";
        j++;
    }
    cout << endl;
    i++;
 }
 
}
int main()
{
    int n;
    cin >> n;
    printalpha(n);
    return 0;
}