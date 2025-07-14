#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {2, -8, 3, 6, 21, 44, 34, 54, 8, 1};
    //tO FIND weather the element is present or not
    
    cout << "enter the element to search for " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if(found){
        cout << "key is  present" << endl;
    }
    else
    {
        cout << "key is absent "<< endl;
    }
    return 0;
}