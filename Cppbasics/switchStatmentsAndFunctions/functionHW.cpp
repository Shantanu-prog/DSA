#include<iostream>
using namespace std;

int arithmaticProgression( int n )
{
   int ap = (3 * n + 7);

   return ap;
}
int main()
{
    int n;
    cin >> n;
    cout << "AP is "<<arithmaticProgression(n) << endl;
    return 0;
}