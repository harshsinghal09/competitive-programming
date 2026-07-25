#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<long long>preSum(n);
        vector<int>preMax(n);
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(i==0)
            {
                preSum[i] = x;
                preMax[i] = x;
            }
            else
            {
                preSum[i] = preSum[i-1]+x;
                preMax[i] = max(x,preMax[i-1]);
            }
        }

       

        while(q--)
        {
            int k;
            cin>>k;

            int index = upper_bound(preMax.begin(),preMax.end(),k)-preMax.begin()-1;

            if(index<0)
            cout<<0<<" ";
            else
            cout<<preSum[index]<<" ";
        }

        cout<<endl;

    }
}