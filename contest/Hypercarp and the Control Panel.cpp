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

        vector<int> arr(n);

        for(int i=0;i<n;i++)
            cin>>arr[i];

        if(n==1)
        {
            cout<<1<<"\n";
            continue;
        }

        int cur=1;

        for(int i=0;i<n-1;i++)
        {
            if(arr[i]!=arr[i+1])
                cur++;
        }

        int ans=cur;

        for(int i=0;i<n-1;i++)
        {
            int before=0;

            if(i>0 && arr[i-1]!=arr[i])
                before++;

            if(arr[i]!=arr[i+1])
                before++;

            if(i+1<n-1 && arr[i+1]!=arr[i+2])
                before++;

            swap(arr[i],arr[i+1]);

            int after=0;

            if(i>0 && arr[i-1]!=arr[i])
                after++;

            if(arr[i]!=arr[i+1])
                after++;

            if(i+1<n-1 && arr[i+1]!=arr[i+2])
                after++;

            ans=max(ans,cur-before+after);

            swap(arr[i],arr[i+1]);
        }

        cout<<ans<<"\n";
    }

    return 0;
}