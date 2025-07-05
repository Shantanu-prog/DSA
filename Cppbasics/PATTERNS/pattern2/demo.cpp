#include <iostream>
using namespace std;
void print(int n){
    int i = 1;
      while(i <= n){
        int j = 1;
        while (j <= n)
        {
          cout << j << " ";
          j++;  
        }
        cout << endl;
        i++;
      }
    }
int main() {
    int n;
    cin >> n;
    print(n);
  return 0;
}