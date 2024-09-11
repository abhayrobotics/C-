#include<bits/stdc++.h>
using namespace std;
int main() {

// input.txt

// abhchaac
// 5
// a
// b
// g
// h 
// c

    // cout<<'a';
    // Any expression convert the character to ASCII
    // cout<<'a'+ 2;

    // input
    string query1;
    cin>>query1;
    
    int arr[26]= {0};
    // precompute

    for(int i=0;i<query1.length();i++){
        // Storing the value in [0,...,25] with values [a,b,...z]
        arr[query1[i]-'a']++;

    }
    // Fetching;
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        cout<< arr[x-'a']<<endl;
    }

//*********************************** */ optimised Way using Map
cout <<"USing Map"<<endl;
map<char,int> mp2;

// precompute
for(int i;i<query1.size();i++){
    mp2[query1[i]]++;

}
// Fetching;
    int n2;
    
    cin>>n2;
    for(int i=0;i<n2;i++){
        char x;
        cin>>x;
        cout<< mp2[x]<<endl;
    }

// Visualing Map
 for (auto it:mp2){
    cout<<it.first<<"--> " <<it.second<<endl;
 }
    

    return 0;
}