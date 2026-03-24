#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long ans = 1;
        long long temp = k;
        long long base = n%1000000007;
        while(temp)
    {
        if(temp%2==1)
        {
            ans = (ans*base)%1000000007;
        }

        base = (base*base)%1000000007;
        temp/=2;
    }
    cout<<(ans)%1000000007<<endl;
    }
}