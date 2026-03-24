#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>&candy,int n,int target)
{
    int s = 0, e = n-1,mid;
    int ans = n;
    while(s<=e)
    {
        
        mid = s+(e-s)/2;
        if(candy[mid]>=target)
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
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>candy(n);
        for(int i=0; i<n; i++)
        {
            cin>>candy[i];
        }
        sort(candy.rbegin(),candy.rend());

        //convert to prefix sum array
        for(int i=1; i<n; i++)
        {
            candy[i] += candy[i-1];
        }

        while(q--)
        {
            int x;
            cin>>x;
            int lb = lower_bound(candy,n,x);
            lb += 1;
            if(lb>n)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<lb<<endl;
            }

        }

    }

}