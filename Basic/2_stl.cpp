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
    cout<< arr[2].second;


    // ! Vector
    vector <int> v;
    v.push_back(1);
    cout<<v;


    return 0;
}
