#include <iostream>
using namespace std;

int main() {
  int a = 9, b = a+1;

  if ((a = 10) == b){
    cout << "a";
  }
  else {
    cout << "b";
  }  
}   