#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>&arr,int n,int target)
{
    int ans = n;
    int s=0,e=n-1,mid;
    while(s<=e)
    {
        mid = s+(e-s)/2;
        if(arr[mid]>=target)
        {
            ans = min(ans,mid);
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=1; i<n; i++)
    arr[i] = arr[i-1]+arr[i];

    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int lb = lower_bound(arr,n,x)+1;
        cout<<lb<<endl;
    }
}