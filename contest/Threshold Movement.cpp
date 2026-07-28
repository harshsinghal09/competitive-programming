#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<long long>w(n);
        for(int i=0; i<n; i++)
            cin>>w[i];

        if(n&1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        long long low=INT_MAX,high=INT_MIN;

        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            low = min(low,w[i]);
            else
            high = max(high,w[i]);
        }

        if(low-high>1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}