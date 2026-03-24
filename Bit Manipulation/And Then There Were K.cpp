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
        int x = n;
        int count = 0;
        while(x)
        {
            x/=2;
            count++;
        }
        cout<<(1<<(count-1))-1<<endl;
    }
}