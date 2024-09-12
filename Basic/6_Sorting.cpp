#include<bits/stdc++.h>
using namespace std;
void selection_Sort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int min =i;
        for(int j=i;j<n;j++){
            // check for minimum
            if(arr[j]<arr[min]){
                min =j;

            }
        }
        // Swap
        int temp;
        temp =arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }


}

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_Sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

    return 0;
}