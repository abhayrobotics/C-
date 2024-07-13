#include <bits/stdc++.h>

using namespace std;

void print1(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print8(int n)
{
    for (int i = 0; i < n; i++)
    {

        // ?SPACE
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print10(int n)
{

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j < i; j++)
        {
            start = 1 - start;
            cout << start << " ";
        }
        cout << endl;
    }

    // method-2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
void print12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // space
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << "  ";
        }

        // numbers
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
void print13(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start++ << " ";
        }
        cout << endl;
    }
}
void print14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void print16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

void print17(int n)
{
    // method -1
    // for(int i=1;i<=n;i++){
    //     // space
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }

    //     // Letters increasing
    //     for(char ch='A';ch<='A'+i-1;ch++ ){
    //         cout<<ch<<" ";
    //     }

    // // Letters decreasing
    //     for(char ch='A'+i-2;ch>='A';ch-- ){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
    // method-2
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        char ch = 'A';
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch << " ";
            if (j < i)
                ch++;
            else
                ch--;
        }
        cout << endl;
    }
}

void print18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {

            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void print19(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = n - i + 1; j > 0; j--)
        {
            cout << "* ";
        }
        // space
        for (int j = 1; j < 2 * i - 1; j++)
        {
            cout << "  ";
        }
        // star
        for (int j = n - i + 1; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {

        // decreasing trend
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        // space
        for (int j = 2 * n - 2 * i + 1; j > 0; j--)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print20(int n)
{
        int space =2*n-2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n){
            star = 2 * n - i;
            space= 2*(i-n);
        }
        // star
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }

        // space
        for(int j=1;j<=space;j++){
            cout<<"  ";
            
        }
        if(i<=n) space=space-2;
            else space=space+2;

       // star
        for (int j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
}

void print21(int n){
    int star =2;
    int space =0;
    for(int i=1;i<=n;i++){
        if(i==1||i==n) 
        {
            star=n;
            space=0;
        }else {
            star=2;
            space= n-2;
        }
        // star
        for(int j=1;j<=star-1;j++){
            cout<<"* ";
            
        }
        // space
        for(int j=1;j<=space;j++){
            cout<<"  ";
            
        }
        // star
        for(int j=1;j==1;j++){

            cout<<"* ";
        }
            
        

        cout<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        // print1(n);
        // print7(n);
        // print8(n);
        // print10(n);
        print21(n);
    }
    

    return 0;
}
