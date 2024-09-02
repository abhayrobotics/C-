#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hash Map" << endl;

    // input.txt
    //     5
    // 1 2 3 2 1 
    // 5
    // 2
    // 3
    // 4
    // 12
    // 1

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    //*****/ taking input
    int query;
    cin >> query;
    // initailizing the vector with 0 values, for 1-12 , we take 13
    vector<int> hash(13,0);



    //****************** */ Prestoring

    for (int i = 0; i < n; i++)
    {
        // incrementing the value of hash index for which the value is present
       
        hash[arr[i]]++;
    }

    
    while (query > 0){
        int x;
        cin>>x ;
        // fetching the value of hash index
        cout<<hash[x];

        query--;
   }
    int hash2[2]={0};
    cout<<'a';


return 0;
}