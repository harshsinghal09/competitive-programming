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

       map<int,int>m;
       int ans = 0;
       for(int i=0; i<n; i++)
       m[arr[i]]++;

       for(auto i:m)
       {
            int current_doll = i.first;   
            int current_count = i.second; 
            
            // Pichle consecutive number (size - 1) ka count check karein
            int prev_count = m[current_doll - 1]; 

            if(current_count > prev_count)
            ans += (current_count - prev_count);
            
       }
       cout<<ans<<endl;
    }
}