#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<long long>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int p=1;p<=60;p++)
        {
            long long k=1LL<<p;

            set<long long>st;

            for(int i=0;i<n;i++)
                st.insert(a[i]%k);

            if(st.size()==2)
            {
                cout<<k<<"\n";
                break;
            }
        }
    }

    return 0;
}