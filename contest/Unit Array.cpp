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
        int one = 0, minusOne = 0;
	    for(int i=0; i<n; i++)
	    {
            cin>>arr[i];
            if(arr[i]==1)
            one++;
            else
            minusOne++;
        }

        int ans = 0;
        if((n/2)<minusOne)
        {
            ans = minusOne-n/2;
            minusOne -= ans;
        }
        if(minusOne%2!=0)
        {
            ans++;
            minusOne--;
        }
        

        cout<<ans<<endl;
	    
	    
	}

}
