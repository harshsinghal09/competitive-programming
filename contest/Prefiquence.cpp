#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    string ans = "";
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
        ans += a[i];
        i++,j++;
        }
        else
        j++;
    }
    cout<<ans.size()<<endl;
    }
}