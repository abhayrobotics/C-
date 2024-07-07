#include <bits/stdc++.h>
using namespace std;

// void function
void printName(){
    cout<< "Hey Abhay \n";
}

// void paraterised function 
void printName2(string name){
    cout << "Hello " << name << endl;
}
// return parameter function
int sum(int a, int b){
    int c = a + b;
    return c;
}
int main()
{
    printName();
    printName2("Raj");

    int first ,second;
    cin >>first>> second;
    int res = sum(first,second);
    cout<< res;

    return 0;

} 
