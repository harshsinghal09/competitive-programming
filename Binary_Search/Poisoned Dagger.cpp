#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,h;
        cin>>n>>h;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        cin>>arr[i];

        long long k = 1;
        long long s=1,e=h;
        while(s<=e)
        {
            long long mid = s+(e-s)/2;
            long long count = 0;
            for(int i=0; i<n-1; i++)
            {
                
                if(arr[i+1]-arr[i]>=mid)
                {
                    count += mid;
                }
                else
                {
                    count += arr[i+1]-arr[i];
                }
            }
            count += mid;
            if(count>=h)
            {
                k = mid;
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        cout<<k<<endl;
    }
}