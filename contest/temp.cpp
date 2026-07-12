#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int res = 1;
    for(int i=2;i<=n;i++)
    {
        res = res*i;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
        }
        int y = fact(10-n)/(fact(8-n)*2)*6;
        cout<<y<<endl;

    }
}