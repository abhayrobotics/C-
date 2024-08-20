#include <bits/stdc++.h>
using namespace std;

int count1 = 1;
void printNos(int N)
{
    // Your code here
    if (count1 == N + 1)
    {
        return;
    }
    cout << count1 << " ";
    count1++;
    printNos(N);
}

// TC-O(N) ,SC-O(N)
void printName(int i, int N)
{
    if (i > N)
        return;
    cout << "Hey Abhay \n";
    printName(i + 1, N);
}

// Using backtrack in ascending order
void printNos2(int N)
{
    if (N < 1)
    {
        return;
    }
    printNos2(N - 1);
    cout << N << " ";
}

// Using backtrack in descending order
void printNosRev(int i, int N)
{
    if (i > N)
    {
        return;
    }
    printNosRev(i + 1, N);
    cout << i << " ";
}

// sum of nos in parameter way
int sum(int n, int sum1)
{
    if (n < 1)
    {
        return sum1;
    }
    sum1 = sum1 + n;
    return sum(n - 1, sum1);
}

// Functional way
int sum2(int n)
{
    if (n == 0)
        return 0;

    return n + sum2(n - 1);
}

int factorial(int N)
{
    if (N == 0)
        return 1;

    return N * factorial(N - 1);
}

void reverse(int i, int N, vector<int> &arr)
{

    if (i >N / 2)
    {
        cout<<"exit";
        return;
    }
    cout << arr[i] << " " << arr[N - i - 1] << endl;
    swap(arr[i], arr[N - i - 1]);
    cout << "Rev" << arr[i] << " " << arr[N - i - 1] << endl;

    reverse(i + 1, N, arr);
}
int main()
{

    int N;
    cin >> N;

    // printNos(N);
    // printName(1,N);

    // using backtrack
    // printNos2(N);
    // printNosRev(1,N);

    // sum of nos. parameter way
    // cout<< sum(N,0);

    // sum of nos in funnctional way
    // cout<< sum2(N);

    // facotorial
    // cout <<factorial(N);

    // reverse a no.
    vector<int> arr{N};
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    reverse(0, N, arr);
    cout << "loop end";
    for (int i = 0; i < N; i++)
    {

        cout << arr[i] << " ";
    }
    return 0;
}