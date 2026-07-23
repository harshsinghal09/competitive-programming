#include<bits/stdc++.h>
using namespace std;
vector<int> find(vector<int>&arr)
{
    vector<pair<int,int>>p;
    for(int i=0; i<arr.size(); i++)
    {
        p.push_back({arr[i],i});
    }

    sort(p.rbegin(),p.rend());

    vector<int>ans;
    for(int i=0; i<3; i++)
    ans.push_back(p[i].second);

    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n),b(n),c(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++) cin>>c[i];

        vector<int>mxa = find(a);
        vector<int>mxb = find(b);
        vector<int>mxc = find(c);

        int ans = 0;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<3; k++)
                {
                    int x = mxa[i];
                    int y = mxb[j];
                    int z = mxc[k];
                    if(x==y || y==z || z==x)
                    continue;

                    ans = max(ans,a[x]+b[y]+c[z]);
                }
            }
        }
        cout<<ans<<endl;
       
    }

    }

