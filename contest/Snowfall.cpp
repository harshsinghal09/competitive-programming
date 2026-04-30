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
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        cin>>arr[i];

        vector<int>two,three,six,neutral;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%6==0)
            six.push_back(arr[i]);
            else if(arr[i]%2==0)
            two.push_back(arr[i]);
            else if(arr[i]%3==0)
            three.push_back(arr[i]);
            else
            neutral.push_back(arr[i]);
        }

        for(auto i:two) cout<<i<<" ";
        for(auto i:neutral) cout<<i<<" ";
        for(auto i:three) cout<<i<<" ";
        for(auto i:six) cout<<i<<" ";
        cout<<endl;

    }
}
