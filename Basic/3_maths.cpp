#include <bits/stdc++.h>
using namespace std;

// count the no. of digits
int count(int n)
{

    int count = 0;
    // method-1
    // while(n>0){
    //     n=n/10;
    //     count++ ;
    // }

    // method 2-optimal approach
    count = log10(n) + 1;
    return count;
}

// Reverse a number
int reverse(int x)
{
    long newX = 0;
    int lastdigit = 0;
    cout<<"check"<<x;
    while (x != 0)
    {
        lastdigit = x % 10;
        x = x / 10;
        newX = newX * 10 + lastdigit;
    }
    if (newX < -2147483648 || newX >= 2147483647)
        return 0;
    return newX;
}

int main()
{
    int x;
    cin >> x;
    cout << count(x);
    cout<<reverse(x);
    return 0;
}