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
    cout << "check" << x;
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

// 3 check palindrome
bool isPalindrome(int x)
{
    // float y= 10;
    // cout<<y/3; this return decimal no.
    if (x < 0)
        return false;
    int originalX = x;
    long newX = 0;
    int lastdigit = 0;
    while (x != 0)
    {
        lastdigit = x % 10;
        x = x / 10;
        newX = newX * 10 + lastdigit;
    }
    if (originalX == newX)
        return true;
    return false;
}

// 4  greatest common factor(GCF or GCD(divisor))
int gcf(int x, int y)
{
    // method-1
    // for(int i = min(x,y);i>0;i--){
    //     if(x%i==0 && y%i==0){
    //         return i;
    //     }
    // }

    // method 2-Euclidean Alogorithm-gcf(a,b)= gcf(a-b,b) whre a >b
    while (x > 0 && y > 0)
    {

        if (x == y)
            return x;
        else if (x > y)
            x = x % y;
        else
            y = y % x;
    }
    if (x == 0)
        return y;
    return x;
}

// 5 armstong no. abc= a^3 +b^3=c^3
bool armstrong(int a)
{

    int arms = 0;

    int original = a;
    while (a > 0)
    {
        arms = arms + pow(a % 10, 3);
        a = a / 10;
        // cout<<"run"<<arms<<endl;
    }
    if (original == arms)
        // cout << arms << endl;
        return true;
    else
        return false;
}

// 6 print all factors of a no. is sorted way
void factors(int N)
{
    // Brute force method -1
    // for (int i = 1; i <= N; i++)
    // {
    //     if (N % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    // optimum approach- less iteration - O(sqrt(N)+ )
    vector<int> v = {};
    for (int j = 1; j * j <= N; j++)
    {
        if (N % j == 0)
        {
            v.push_back(j);
            // cout<<j<<" ";
            if (N / j != j)
            {
                v.push_back(N / j);
                // cout<<j<<" ";
            }
        }
    }
    sort(v.begin(),v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    // cout<<endl;
}

// 7
int main()
{
    int x, y;
    cin >> x;
    // cout << count(x);
    // cout << reverse(x);
    // cout<< isPalindrome(x);
    // cout<<gcf(x,y);
    // cout << armstrong(x);
    // factors(x);
    do{
        cout<< "Enter a number"<<endl;

    }
    
    while(false);
    {
        cout<<"yoyo";
         
    }

    return 0;
}