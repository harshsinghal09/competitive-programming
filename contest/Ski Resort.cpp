#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,q;
	    cin>>n>>k>>q;
	    vector<int>arr(n);
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
        int count = 0;
        long long ans = 0;
      
        long long x = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>q)
            {
                if(count>=k)
                {
                    
                    x = count-k+1;
                    ans += x*(x+1)/2;
                }
                count = 0;
            }
            else
            count++;
            
        }
        if(count>=k)
        {
            x = count-k+1;
            ans += x*(x+1)/2;
        }

        cout<<ans<<endl;
	   
	    
	}

}
