#include<iostream>
using namespace std;

void printalpha(int n)
{
   for(int i = 1; i <= n; i++)

   {
    for(int j = 1; j <= n; j++)
    {
        char alpha = ('A' + i + j - 2);
        cout << alpha << " ";
    }
    cout << endl;
   }
}
int main()
{
    int n;
    cin >> n;
    printalpha(n);
    return 0;
}

       //OR


       #include<iostream>
       using namespace std;

       void printalpha(int n)
       {
        int i = 1;
         while (i <= n)
         {
            int j = 1;
            while ( j <= n)
            {
            char alpha = ('A' + i + j - 2);
            cout << alpha << " ";
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