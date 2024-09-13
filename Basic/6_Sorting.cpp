#include<bits/stdc++.h>
using namespace std;
void selection_Sort(int arr[],int n){

    for(int i=0;i<=n-2;i++){
        int min =i;
        // running the loop for rest part of unsorted array
        for(int j=i;j<=n-1;j++){
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
void bubbleSort(int arr[],int n){
    int didSwap =0; 
    for(int i=n-1;i>=0;i--){
    // reducing the size of array to be sorted from end
        for(int j=0;j<=i-1;j++){

            if(arr[j]>arr[j+1]){
                // Swap 
                int temp;
                temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                cout<<"swap ";
                didSwap =1;
            }
           
           

        }
         // if no swap happens in 1st loop
            if(didSwap==0){
                break;
            }
        cout<<endl;
    }

}

int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // selection_Sort(arr, n);
    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

    return 0;
}