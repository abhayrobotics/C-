// all Types of Data structure
#include <bits/stdc++.h>
using namespace std;

// boolean function that retunrs trueand false
bool comp(pair<int,int> p1, pair<int,int> p2){

    // for increasing
    if(p1.second<p2.second) return true;
    if(p1.second>p1.second) return false;

    else{
        if(p1.first>p2.first) return true;
        return false;
    }
    
}

int main()
{

    //! pair
    pair<int, int> p= {1,3};
    cout<<p.first<<" & "<<p.second<<endl;
    // cout<<p; -wrong syntax

    // Nested pair
    pair<int,pair<int,int>> p2 ={1,{2,3}};
    cout<< p2.first<<" & "<<p2.second.first<<" & "<<p2.second.second<<endl;

    // par array
    pair<int,int> arr[]= {{1,2},{2,4},{4,5}};
    cout<< arr[2].second<<endl;


    // ! Vector
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);
    cout<<v[2]<<endl;

    // vector using pair
    vector <pair<int,int>> v2 ;
    v2.push_back({2,3});
    v2.emplace_back(4,5);
    cout<< "v2[0].first- "<< v2[0].first<< endl;
    // {{2,3},{4,5}}

    vector <int> v3(3,100);
    cout<<v3[1]<<endl;
    // {100,100,100} {size ,value}

    // ! acces vector
    vector <int> v4={2,3,4,5};
    vector <int> ::iterator x = v4.begin();
    cout<< "*(x) - "<< *(x)<<endl;
    
    // normal variable
    for(int i=0; i<v4.size();i++){
        cout<<v4[i]<<" ";

    }
    cout<<"using normal loop"<<endl;

    // short syntax
    for(auto it:v4){
        cout<<it<<" ";
    }
    cout<<"normal variable short syntax"<<endl;


    // iterator
    for(vector <int> ::iterator y = v4.begin();y<v4.end();y++){
        cout<<*(y)<<" ";

    }
    cout<<"-  using iterator"<<endl;

    // ! erase
    v4.erase(v4.begin()+1);
    // multi
    // v4.erase(v4.begin()+1,v4.begin()+3);

    // short
    for(auto it= v4.begin();it!= v4.end();it++){
        cout<<*(it)<<" ";
    }
     cout<<"using short cut iterator"<<endl;
    cout<< *(v4.begin())<<endl;
    v4.insert(v4.begin(),300);
    cout<< v4[0]<<endl;

    vector<int> v5 ={10,20,30};
    v4.insert(v4.begin(),v5.begin(),v5.end());
    cout<<v4[0]<<endl;

    for(auto a:v4){
        cout<<a<<" ";
    }
    cout<<endl;

    // properties
    cout<<v4.size()<<endl;
    v4.pop_back();
    cout<< *(v4.end()-1)<<endl;
    v4.swap(v5);

    v4.clear();
    cout<< v4.empty()<<"- true.false"<<endl;

    // !------------------LIST
    list<int> ls;
    ls.push_back(3);
    cout<<ls.front()<<endl;
    
    ls.emplace_back(4);
    cout<<ls.back()<<endl;
    
    ls.push_front(1);
    cout<<ls.front()<<endl;

    // !______________ DEQUE
    // insertion and deletion from both ends
    deque <int>de={0};
    
    de.push_back(3);
    de.push_front(2);
    for(auto i :de){
        cout<<i<<" ";
    }
    cout<<endl;

    de.pop_back();
    de.pop_front();
    for(auto i :de){
        cout<<i<<" ";
    }
    cout<<endl;
    

    // !____________________ STACK
    //  LIFO principle
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.top();
    st.size();
    cout<<"st.empty()- "<<st.empty()<<endl;
    st.pop();
    stack<int> st2;
    st2.push(100);
    st.swap(st2);

    // !_________________________ Queue
    // FIFO 
    queue <int> q;
    q.push(5);

    // !______________________Priority queue
    // default -highest element in top priority
    
    priority_queue <int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(4);
    pq.push(3);
    cout<<"priority_queue - ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

// lowest prioriy queue
    priority_queue<int,vector <int>,greater <int>> pq2;
    pq2.push(3);
    pq2.push(9);
    pq2.push(23);
    pq2.push(35);
    pq2.push(7);
    pq2.push(5);
    cout<<"min priority queue- ";
    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    cout<<endl;
    
    
    // !________________SET
    // unique, ordered
    set<int> set1;
    set1.insert(1);
    set1.insert(4);
    set1.insert(2);
    set1.insert(1);
    for(auto i:set1){
        cout<<i<< " ";
    }
    cout<<endl;

    // iterator
    auto it1 = set1.find(2);
    it1++;
    cout<< *(it1);

    // count the no of times it ispresent, since set is unique will alsways result 1
    cout<< set1.count(4)<<endl;

    set1.erase(4);
    

    // !_____________________ Multiset
    // only sorted not unique

    multiset <int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(5);
    ms.insert(4);
    ms.insert(1);
    cout<< ms.count(1)<<endl;

    // !_________________ unordered se
    // only unique

    // ! _______________MAp
    // unique key , non unique value stored in sorted manner
    map<int,int> mp1;
    map<pair<int,int>,int> mp2;
    map<int, pair<int,int>> mp3;

    mp1[1]=2;
    mp1.insert({2,5});
    mp1.emplace(3,4);
    for(auto it:mp1){
        cout<<it.first<<" has value of "<<it.second<<endl;;
    }

    //!______________________  MultiMap 
    // multiple same key in sorted manner
    // mp1[key ] not possible

    // ! ___________________ unordered map
    // unique key in unsorted manner.

    // ? ********************************** ALGORITHM
    cout<<"***************************Algorithm*****************************"<<endl;
    // !__________________sort
    vector <int> v10={1,3,5,2};
    
    // increasing
    //  sort(v10.begin(),v10.end());
    
    // parital sort
    // sort(v10.begin()+2,v10.begin()+4);

    // decreasing
    // sort(v10.begin(),v10.end(),greater <int>());

    for(auto i:v10){
        cout<<i<<" ";
    }
    cout<<endl;
    // custom way of sort
    // sort in increasing manner as per second element
    // if second same , sort in decraseing order as per 1st element
    pair<int,int> pa[]={{1,2},{2,1},{4,1}};

    sort(pa,pa+3,comp);


    for(auto i:pa){
        cout<<i.first<<", "<<i.second<<" : ";
    }
    cout<<endl;


    return 0;   
}
