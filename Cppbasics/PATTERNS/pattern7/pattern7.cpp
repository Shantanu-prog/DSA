// #include<bits/stdc++.h>                     
// #include<iomanip>
// using namespace std;

// void printnum(int n){
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         int count = i;
//         while (j <= i)
//         {
//             cout << setw(3) <<count;
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
    
// }
// int main(){
//     int n;
//     cin >> n;
//      printnum(n);
//      return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;

void printnum(int n) {
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= i; j++) {
            cout << setw(3) << (i + j - 1)<< " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printnum(n);
    return 0;
}

