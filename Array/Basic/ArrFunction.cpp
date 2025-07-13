#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing the array" << endl;

    //print the array
        for (int i = 0; i < size; i++)
        {
           cout << arr[i] << " ";
        }
         cout << endl; 
         cout << " printing Done " << endl;
    }
    
    int main()
    {
        //declare
        int third[15] ={2,7};
    
        int n = 15;
    
        //accessing an array
        printArray(third, 15);

        int thirdsize = sizeof(third)/sizeof(int);
        cout << "size of third is " << thirdsize << endl;
    
        return 0;
    }