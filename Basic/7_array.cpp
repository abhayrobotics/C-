#include<bits/stdc++.h>
using namespace std;

void largestNo(vector <int> &arr){
    // cout<<"check";
     int largest = arr[0];
    //  cout<<arr.size();
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
       cout<< largest;

}


int main (){
    // cout<<"check";
    int n;
    vector<int> arr;

    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
  
    largestNo(arr);

    return 0;
}