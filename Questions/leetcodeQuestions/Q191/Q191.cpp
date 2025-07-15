//Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

#include<iostream>
using namespace std;

int printbinary(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++; 
        }
        n=n>>1;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<printbinary(n)<<'\n';
    }
    return 0;
}

//or

#include<iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1); // removes the lowest set bit
        count++;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << countSetBits(n) << endl;
    }
    return 0;
}



