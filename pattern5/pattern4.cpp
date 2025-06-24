#include<bits/stdc++.h>
using namespace std;

void printnum(int n){
   for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout << setw(2) <<i;
    }
    cout << endl;
   }
}
int main(){
    int n;
    cin >> n;
    printnum(n);
    return 0;
}
