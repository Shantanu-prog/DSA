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
 
     vector<int> v(5, 100);  // v = {100, 100, 100, 100, 100}

    // Insert 20 after the second 100 (i.e., at index 1)
    v.insert(v.begin() + 2, 20);  // Now v = {100, 100, 20, 100, 100, 100}

    //To print element in vector method 1
    cout << v[2] << " or you can access by " << v.at(2) << endl;

    for (int x : v) cout << x << " ";
    cout << endl;
    
    
    vector<int> v0(5);
    v0.emplace_back(1);
    for(int x : v0) cout << x << " ";
    cout << endl;

    vector<int> v1(5, 20);
    for(int x : v1) cout << x << " ";
    cout << endl; 

    //copy of v1 not similar
    vector<int> v2(v1);
    for(int i : v2) cout << i << " ";
    cout << endl;
    
    //To access element in vector method 2 using iterator
    vector<int>::iterator it = v.begin();
    it++;
    cout << &(*it) << endl; //to print elemnt address
    cout << *(it) << " " << endl; //to print element
    it++; //move ahead or the next address of element
    cout << *(it) << " " << endl;

    it = it + 2; //move ahead by 2 positon
    cout << *(it) << endl;

    cout << v.back() << endl; //points last element of arrary

    //Types of iterator 
    vector<int>::iterator it2_end = v.end(); //ye arary ke last element ke baad point karega, or jab it-- karoge tab ye last element ko point karega
    
    vector<int>::reverse_iterator it2_rend = v.rend(); //ye reverse end hai ye array ke 1st element ke pichai point karega, or jab it++ karoge tab 1st element ko point karega

    vector<int>::reverse_iterator it2_rbegin = v.rbegin(); //ye reverse begin hai jo arrary ke last element ko point karega, or jab it++ karoge to reevrse me move karega


    //to print the enitre vector
    for (vector <int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    //or

    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    //to print an array vector method 3 by for each loop
    for(auto it : v){
        cout << it << " ";
    }  

    //to erase single element 
    v.erase(v.begin() + 1); // {100, 20 , 100, 100, 100}
    for ( int x : v ) cout << x << " ";
    cout << endl;

    //to erase multiple element
    v.erase(v.begin() + 2, v.begin() + 4); // {100, 100, 20, 100, 100, 100}  [start, end) 
    for(auto x : v) cout << x << " ";

    //---- Insert Function

    vector<int>v5(2, 100);
    v5.insert(v5.begin(), 300); //insert single element
    v5.insert(v5.begin() + 1, 2, 10); //insert multiple element {300, 10, 10, 2, 100}

    vector<int> v6(2, 50);
    v5.insert(v5.begin(), v6.begin(), v6.end()); //dusre vector me add ho jayega {50, 50, 300, 10, 10, 2, 100}

    //{10, 20}
    cout << v5.size(); //2

    //{10, 20}
    v5.pop_back(); //{10}

    //v5 --> {10, 20}
    //v6 --> {30, 40}
    v5.swap(v6); //v5 --> {30, 40}, v6 --> {10, 20}

    v5.clear(); //erase the entire vector

    cout << v5.empty(); //if vector have no elemnt then it will return true otherwise it will return false 

}
void ListExplained(){
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); //{2, 4}
    for(auto x : ls) cout << x << " ";

    ls.push_front(5); //{5, 2, 4}
    ls.emplace_front(); // add 0 by defailt {0, 5, 2, 4}
    
    // rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}
void DequeEplained(){
   
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1, 2}
    dq.push_front(4); //{4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); //{3, 4, 1}
    dq.pop_front(); //{4, 1}

    dq.back();

    dq.front();
    //rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}
void stackExplained(){
    stack<int>st;
    st.push(1); //{1}
    st.push(2); //{2, 1}
    st.push(3); //{3, 2, 1}
    st.push(5); //{5, 3, 2, 1}
    st.emplace(4); // {4, 5, 3, 2, 1}
    
    cout << st.top(); //print 4 "st[2] is invalid because it does not have indexing"

    st.pop(); //st looks like {3, 3, 2, 1}

    cout << st.top(); // 3
    cout << st.size(); //4
    cout << st.empty(); // gives false because elemnt is there
    
    stack<int>st1, st2;
    st1.swap(st2);

    //these all happens in O(1).
}
void QueueExplained(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; //this add 5 in the last element {1, 2, 9}

    cout << q.back(); // print 9

    //Q is { 1, 2, 9}
    cout << q.front(); //prints 1

    q.pop(); // {2, 9}

    cout << q.front(); //print 2

    //size, swap, empty, same as stack

}
void PriorityExplained(){
    priority_queue<int>pq; //insted of queue there can be any data type

    pq.push(5); //{5}
    pq.push(2); //{5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10);// {10, 8, 5, 2}

    cout << pq.top(); // prints 10
    
    pq.pop(); // {8, 5, 2}

    cout << pq.top(); //prints 8

    //size, swap, empty, function same as others

    // Minimum Heap
    // priority_queue< T , Container , Compare > is the full template signature.
    //T -->is the type you’re storing (int).
    //Container --> is the underlying container (by default vector<T>).
    //Compare --> is the comparator that defines the heap order (by default less<T>, which gives you a max‑heap).
    //By specifying greater<int> as the comparator, you’re telling C++ to arrange elements so that the smallest element is always at the top → this makes it a min‑heap instead of the default max‑heap.
    priority_queue<int, vector<int>, greater<int>> max;
    max.push(5); //{5}
    max.push(2); // {2, 5}
    max.push(8); // {2, 5. 8}
    max.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); //prints 2

    //push and pop happens log(n) and top happens O(1)
}
void SetExpalined(){
    //set store unique and stores in shorted ordered
   set<int>st;
   st.insert(1); // {1}
   st.emplace(2); // { 1, 2}
   st.insert(2); // { 1, 2}
   st.emplace(4); //{ 1, 2, 4}
   st.insert(3); // {1, 2, 3, 4}

   // Functionality of insert in vector
   //can be used also, that only increases
   //efficiency

   //begin(), end(), rbegin(), rend(), size(),
   // empty() and swap() are same as those of above

   // {1, 2, 3, 4, 5}
   auto it = st.find(3);

   // {1, 2, 3, 4, 5}
   auto it = st.find(6);

   // {1, 4, 5}
   st.erase(5); //erase 5 // takes logarithmic time
   
   int count = st.count(1); //
   
   auto it = st.find(3);
   st.erase(it); // it takes constant time

   // { 1, 2, 3, 4, 5 }
   auto it1 = st.find(3);
   auto it2 = st.find(4);
   st.erase(it1, it2); //after erase {1, 4, 5} [first, last)

   //lower_bound() and upper_bound() function works in the same way
   // as in vector it does.

   // this is the syntax
   auto it = st.lower_bound(2);

   auto it = st.upper_bound(3);

}
void MultiSetExplained(){
   //everything is same as set
   // only stores duplicate elements also
   
   multiset<int>ms;
   ms.insert(1); // {1};
   ms.insert(1); // {1, 1}
   ms.insert(1); // {1, 1, 1}

   ms.erase(1);

   int cnt = ms.count(1);

   //only a single one erased
   ms.erase(ms.find(1));
   
   //erase multiple element
   for(int i = 0; i < 2; i++) {           // Loop runs exactly 2 times
    auto it = ms.find(1);              // Find first occurrence of value 1
    if(it != ms.end()) {               // Check if 1 was found
        ms.erase(it);                  // Remove that single occurrence
    }
    }
}
void UnorederdSetExplained(){
    unordered_set<int> ust;
    //lower_bound and upper_bound function
    // does not works, rest all functions are same
    // as above, it does not stores in any
    // particular order it has a better complexity
    // then set in most cases, except some when collision happens

    //it woeks on O(1) but in sometimes rearly in worst case O(n)
}
void MapExplained(){

    map<int, int> mpp;

        mpp[1] = 2;
    mpp.emplace(3, 1); // or mpp.emplace(std::make_pair(3, 1));
    
    mpp.insert(2, 4);
   
    // {
    //     {1, 2}
    //     {2, 4}
    //     {3, 1} 
    // }

    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;
      
     mpp2[{2, 3}] = 10; // {{2, 3}, 10}

     for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
     }

     cout << mpp[5];
     cout << mpp[1];

     auto it = mpp.find(3); //access any element
     cout << it->second;
    
     auto it = mpp.find(5); // if 5 is not in array it will point to end
 
     auto it = mpp.lower_bound(2);
     auto it = mpp.upper_bound(3);

     //erase, swap, size, empty, are same as above
}

int main(){
    MapExplained();
    return 0;
}