#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i <= 5; i++)
    {
        cout << i << " ";
        i++;
    }
}

//problem2

#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i <= 5; i--)
    {
        cout << i << " ";
        i++;
    }
}

//problem3

#include<iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = i; j <= 5; j++){
            cout << i << " " << j << endl;
        }
    }
}

//problem4

#include<iostream>
using namespace std;
int main()
{
    for(int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";

        if ( i & 1){
            continue;
        }
        i++;
    }
}