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

        map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }

        if(mp.size()==1)
        {
            cout<<"Yes\n";
        }
        else if(mp.size()>2)
        {
            cout<<"No\n";
        }
        else
        {
            auto it=mp.begin();
            int c1=it->second;
            it++;
            int c2=it->second;

            if(n%2==0)
            {
                if(c1==c2)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
            else
            {
                if(abs(c1-c2)==1)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
        }
    }

    return 0;
}