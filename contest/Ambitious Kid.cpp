#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	    int n;
	    cin>>n;
        vector<int>arr(n);
        int pmi = INT_MAX;
        int nmx = INT_MIN;
	    for(int i=0; i<n; i++)
	    {
	      cin>>arr[i];
	    }

        int ans = INT_MAX;
        for(int i=0; i<n; i++)
        {
           ans = min(ans,abs(arr[i]));
        }
  
        cout<<ans<<endl;

}
