#include<iostream>
using namespace std;

void update(int arr[], int n)
{
  cout << "inside the function" << endl;
 //updatting the array's firt element;
  arr[1] = 120;

  //printing the array
  for(int i = 0; i < 3; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << " going back to main function " << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);

    for(int i = 0; i < 3; i++ )
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}