// all Types of Data structure
#include <bits/stdc++.h>
using namespace std;

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




    return 0;
}


