#include<bits/stdc++.h>
using namespace std;

void printstar(int n){
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout << setw(2) << "*";
    }
    cout << endl;
  }
}
int main(){
    int n;
    cin >> n;
    printstar(n);
    return 0;
}

 