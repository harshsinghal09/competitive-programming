#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x = 0;
    int n;
    cin>>n;
    int arr[n];;
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n; i++)
    {
        int y = arr[i];
        x|=y;
    }
    cout<<x<<endl;
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