#include<iostream>
using namespace std;

int main(){
    int fahrenheit = 0, celsius, n;
    cin >> n;
    while ( fahrenheit <= n ){
        celsius = ((fahrenheit - 32) * 5 / 9);
        cout << fahrenheit << " F' = " << celsius << " c'"<< endl;
        fahrenheit++;
    }
  return 0;
}