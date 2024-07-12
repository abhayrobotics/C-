#include <bits/stdc++.h>

using namespace std;

void print1(int n ){
    
    for(int i=0;i<n;i++){

        for(int j=0; j<n;j++){
            cout<< "* ";
        }
        cout <<endl;

    }
}
void print2(int n ){

    for(int i=1;i<=n;i++){

        for(int j=1; j<=i;j++){
            cout<< "* ";
        }
        cout <<endl;

    }
}

void print7(int n){
    for(int i=0; i<n;i++){
        // space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // stars
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        // space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<< endl;
    }
}

void print8(int n){
    for(int i=0;i<n;i++){

        // ?SPACE
        for(int j=0;j<i;j++ ){
            cout<<" ";
        }
        // star
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print10(int n){
    
 for(int i=1;i<=2*n-1;i++){
        int stars =i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars ;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}

void print11(int n){
    int start =1;
    for(int i=0;i<n;i++){
            if(i%2==0) start=1;
            else start=0;
        for(int j=0;j<i;j++){
            start =1-start;
            cout<<start<<" ";
        }
        cout<<endl; 
    }

    // method-2
     for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0) cout<<"1 ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>> t;
    for(int i =0;i<t;i++){
    int n;
    cin>> n;
    // print1(n);
    // print7(n);
    // print8(n);
    // print10(n);
    print11(n);

    }

    return 0;    

}
