#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        long long n,cost;
        cin>>n>>cost;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        cin>>arr[i];
        
        long long total = 0;
        int i=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1)
            total += cost;
            else if(i>0 && arr[i-1]==1)
            total += cost;
            
        }
        cout<<total<<endl;
    }
}
