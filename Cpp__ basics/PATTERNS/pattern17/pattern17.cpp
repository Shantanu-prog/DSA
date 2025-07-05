// #include<iostream>
// #include<iomanip>
// using namespace std;

// void printchar(int n)
// {
//    int i = 1;
//    while (i <= n)
//    {
//      int space = n - i;
//      while (space)
//      {  
//         cout << setw(3) << " ";
//         space--;
//      }
//      int j = 1;
//      while (j <= i)
//      {
//         cout << setw(3) << "*";
//         j++;
//      }
//      cout << endl;
//      i++;
//    }
   
// }
// int main()
// {
//     int n;
//     cin >> n;
//     printchar(n);
//     return 0;
// }

    //OR

#include<iostream>
#include<iomanip>
using namespace std;

void printstar(int n)
{   
    for(int i = 1; i <= n; i++)
    {
        int space = n - i;
        while (space)
        {
            cout << setw(3) << " ";
            space--;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << setw(3) << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printstar(n);
    return 0;
}