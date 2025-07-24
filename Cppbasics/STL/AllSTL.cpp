#include<bits/stdc++.h>
using namespace std;

void pairExplained(){
     pair<int, int> p = {1, 3};
      
     //to access the element.
     cout << p.first << " " << p.second << endl;

     pair<int, pair<int, int>> p2 = {1, {3, 4}};
     //to access the elemnts
     cout << p2.first << " " << p2.second.second << " " << p2.second.first <<endl;

     pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    //to access the elements
     cout << arr[1].second;
}
void vectorExplained(){
    //define vector
    vector<int> shan;
    shan.push_back(1);
    shan.emplace_back(2);
    cout<<"shan: ";
    for(int x : shan) cout << x << " ";
    cout << endl;

    //vector of pairs
    vector<pair<int, int>>vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);
    cout << "vec: ";
    for(auto p : vec) cout << "(" << p.first << "," << p.second << ")";
    cout << endl;
 
    vector<int> v(5, 100);
    for (int x : v) cout << x << " ";
    cout << endl;
    
    
    vector<int> v0(5);
    for(int x : v0) cout << x << " ";
    cout << endl;

    vector<int> v1(5, 20);
    for(int x : v1) cout << x << " ";
    cout << endl; 

    //copy of v1 not similar
    vector<int> v2(v1);
    for(int i : v2) cout << i << " ";
    cout << endl;

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    for (vector <int>::iterator it = v.begin(); it != v.end(); it++){
       cout << *(it) << " ";
    }
}
int main(){
    vectorExplained();
    return 0;
}