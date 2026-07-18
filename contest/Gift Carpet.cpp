#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string>carpet(n);
    for(int i=0; i<n; i++)
    cin>>carpet[i];

    string target = "vika";
    int idx = 0;

    for(int i=0; i<m && idx<4; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(carpet[j][i]==target[idx])
            {
                idx++;
                break;
            }
        }
    }
    if(idx==4)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}