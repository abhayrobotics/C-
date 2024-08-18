#include <bits/stdc++.h>
using namespace std;

int count1 =1;
void printNos(int N)
{
    //Your code here
    if(count1 ==N+1){
        return;
    }
    cout<<count1<<" ";
    count1++;
    printNos(N);
}

// TC-O(N) ,SC-O(N)  
void printName(int i, int N){
    if(i>N) return ;
    cout<<"Hey Abhay \n";
    printName(i+1,N);
}

int main(){

    int N;
    cin>>N;
    // printNos(N);
    printName(1,N);
    return 0;
}