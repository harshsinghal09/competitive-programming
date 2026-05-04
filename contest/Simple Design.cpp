#include<bits/stdc++.h>
using namespace std;
int digitsum(int x)
{
    int sum = 0;
    while(x)
    {
        int ld = x%10;
        sum += ld;
        x/=10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k;
        cin>>x>>k;
        while(true)
        {
            if(digitsum(x)%k==0)
            {
                cout<<x<<endl;
                break;
            }
            x++;
        }
    }
}