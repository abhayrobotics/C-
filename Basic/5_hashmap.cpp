#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hash Map" << endl;

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    //****************** */ taking input
    int query;
    cin >> query;
    vector<int> hash(12,0);

    //****************** */ Prestoring

    for (int i = 0; i < n; i++)
    {
        // incrementing the value of hash index for which the value is present
        hash[arr[i]]=hash[arr[i]]+1;
    }

    // fetching
    while (query > 0){
        int x;
        cin>>x ;
        cout<<hash[x];

        query--;
   }


return 0;
}