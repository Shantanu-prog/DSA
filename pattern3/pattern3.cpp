#include<iostream>
#include<iomanip>
using namespace std;
void printnum(int n){
   int count = 1;
   for (int i = 1; i <= n; i++){
      for(int j = 1; j <=n; j++){
        cout << setw(3) << count << " ";
        count = count + 1;
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