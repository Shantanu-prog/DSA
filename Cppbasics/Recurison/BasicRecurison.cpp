#include<iostream>
using namespace std;

void BasicProgram(int n, int cnt = 0)
{
    if(cnt == 4) {
        return;  // Base condition
    }
    
    cout << cnt << " ";
    BasicProgram(n, cnt + 1);  // Recursive call with incremented counter
}

int main()
{
    int n;
    cin >> n;
    BasicProgram(n);
    return 0;
}