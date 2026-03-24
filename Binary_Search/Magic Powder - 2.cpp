#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>need(n);
    vector<int>available(n);
    for(int i=0; i<n; i++)
    cin>>need[i];
    for(int i=0; i<n; i++)
    cin>>available[i];

    long long s=0,  e = 2e9;

    int ans = 0;
    
    while(s<=e)
    {
        bool flag = 1;
        int mid = s+(e-s)/2;
        int temp = k;
        for(int i=0; i<n; i++)
        {
            
            long long required = 1LL * need[i] * mid;
            required -= available[i];
           
            if(required>0)
            {
                if(required<=temp)
                {
                   temp-=required;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }

        }

        if(flag!=0)
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }

    }
    cout<<ans;
    
}