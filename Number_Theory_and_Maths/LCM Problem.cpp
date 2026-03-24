#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        int x = l;
        int y = 2*l;
        if(y<=r)
        cout<<x<<" "<<y<<endl;
        else
        cout<<"-1 -1"<<endl;

    }
}