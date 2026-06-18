#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    long long ans = 0;
        int mn = INT_MAX;

        for (int i = 0; i < n; i++) {
            mn = min(mn, arr[i]);
            ans += mn;
        }

        cout<<ans<<endl;
	}

}
