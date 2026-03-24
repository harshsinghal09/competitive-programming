#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b)
{   
    int ans = 1;
    if(b==0)
    return 1;
    while(b)
    {
        if(b%2==1)
        {
            ans = ans*a;
        }

        a = a*a;
        b/=2;

    }
    return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>31)
    cout<<m;
    else
    {
        int val = pow(2,n);
        cout<<m%val;
    }

}