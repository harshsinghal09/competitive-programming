#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> arr(n);
        int countm1 = 0;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i] == -1)
            countm1++;
        }

        if(n & 1)
        {
            cout<<"NO\n";
        }
        else
        {
            int need = n/2;

            if(abs(countm1 - need)%2 == 0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}