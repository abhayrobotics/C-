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

// optimised Way using Map


    return 0;
}