 #include<iostream>
 using namespace std;

 void printstar(int n)
 {
    int spc = 0;
    for(int i = 0; i < n; i++)
    {
        //star
        for(int str = 1; str <= n - i; str++)
        {
            cout << "* ";
        }
        //space
        for(int j = 0; j < spc; j++)
        {
            cout << "  ";
        }
        //star
        for(int str = 1; str <= n - i; str++)
        {
            cout << "* "; 
        }
        spc +=2;
        cout << '\n';
    }
    int spc1 = 2 * (n - 1);
    for(int i = 0; i < n; i++)
    {
        //star
        for(int str = 1; str <= i + 1; str++)
        {
            cout << "* ";
        }
        //space
        for(int j = 0; j < spc1; j++)
        {
            cout << "  ";
        }
        //star
        for(int str = 1; str <= i + 1; str++)
        {
            cout << "* ";
        }
        spc1 -=2;
        cout << '\n';
    }
 }
 int main()
 {
    int n;
    cin >> n;
    printstar(n);
    return 0;
 }