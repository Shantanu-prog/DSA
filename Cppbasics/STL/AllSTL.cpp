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
    // vector<int> shan;
    // shan.push_back(1);
    // shan.emplace_back(2);
    // cout<<"shan: ";
    // for(int x : shan) cout << x << " ";
    // cout << endl;

    // //vector of pairs
    // vector<pair<int, int>>vec;
    // vec.push_back({1, 2});
    // vec.emplace_back(1, 2);
    // cout << "vec: ";
    // for(auto p : vec) cout << "(" << p.first << "," << p.second << ")";
    // cout << endl;
 
     vector<int> v(5, 100);  // v = {100, 100, 100, 100, 100}

    // Insert 20 after the second 100 (i.e., at index 1)
    v.insert(v.begin() + 2, 20);  // Now v = {100, 100, 20, 100, 100, 100}

    // //To access element in vector method 1
    // cout << v[2] << " or you can access by " << v.at(2) << endl;

    // for (int x : v) cout << x << " ";
    // cout << endl;
    
    
    // vector<int> v0(5);
    // v0.emplace_back(1);
    // for(int x : v0) cout << x << " ";
    // cout << endl;

    // vector<int> v1(5, 20);
    // for(int x : v1) cout << x << " ";
    // cout << endl; 

    // //copy of v1 not similar
    // vector<int> v2(v1);
    // for(int i : v2) cout << i << " ";
    // cout << endl;
    
    //To access element in vector method 2 using iterator
    // vector<int>::iterator it = v.begin();
    // it++;
    // cout << &(*it) << endl; //to print elemnt address
    // cout << *(it) << " " << endl; //to print element it self
    // it++; //move ahead or the next address of element
    // cout << *(it) << " " << endl;

    // it = it + 2; //move ahead by 2 positon
    // cout << *(it) << endl;

    // cout << v.back() << endl; //points last element of arrary

    // //Types of iterator 
    // vector<int>::iterator it = v.end(); //ye arary ke last element ke baad point karega, or jab it-- karoge tab ye last element ko point karega
    
    // vector<int>::reverse_iterator it = v.rend(); //ye reverse end hai ye array ke 1st element ke pichai point karega, ot jab it++ karoge tab 1st element ko point karega

    // vector<int>::reverse_iterator it = v.rbegin(); //ye reverse begin hai jo arrary ke last element ko point karega, or jab it++ karoge to reevrse me move karega


    //to print the enitre vector
    // for (vector <int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout << *(it) << " ";
    // }
    // cout << endl;

    // //or

    // for(auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // //to print an array vector method 3 by for each loop
    // for(auto it : v){
    //     cout << it << " ";
    // }  

    //to erase single element 
    // v.erase(v.begin() + 1); // {100, 20 , 100, 100, 100}
    // for ( int x : v ) cout << x << " ";
    // cout << endl;

    //to erase multiple element
    v.erase(v.begin() + 2, v.begin() + 4); // {100, 100, 20, 100, 100, 100}  [start, end) 
    for(auto x : v) cout << x << " ";
}
int main(){
    vectorExplained();
    return 0;
}