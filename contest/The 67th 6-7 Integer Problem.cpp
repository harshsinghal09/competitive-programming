#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>arr(7);
        for(int i=0; i<7; i++)
        cin>>arr[i];

        int maxi = INT_MIN;
        for(int i=0; i<7; i++)
        maxi = max(arr[i],maxi);

        int sum = 0;
        bool flag = 0;;
        for(int i=0; i<7; i++)
        {
            if(arr[i]==maxi && flag==0)
            {
                flag = 1;
                continue;
            }
            sum += arr[i];
        }
        cout<<maxi-sum<<endl;

    }
}