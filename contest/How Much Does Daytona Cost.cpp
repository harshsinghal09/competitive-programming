#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        bool ok=false;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;

            if(x==k)
                ok=true;
        }

        if(ok)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}