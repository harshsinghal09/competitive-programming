#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,q;
        cin>>k>>q;
        vector<int>arr(k);
        for(int i=0; i<k; i++)
        cin>>arr[i];

       
        while(q--)
        {
            int x;
            cin>>x;
            cout<<min(arr[0]-1,x)<<" ";
        }
        cout<<endl;
    }
}