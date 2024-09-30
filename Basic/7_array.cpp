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
       cout<< largest<<endl;

}

void getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest =arr[0];
        int slargest = -1;
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]>largest){
                slargest = largest;
                largest =arr[i];
                
            }
            else if(arr[i]<largest && arr[i]>slargest){
                slargest = arr[i];
            }
        }
        cout<< slargest;
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
    getSecondLargest(arr);
    return 0;
}