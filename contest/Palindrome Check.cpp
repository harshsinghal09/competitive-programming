#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int>arr(n);
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    int s = 0, e = n-1;
	    bool flag = 1;
	    while(s<e)
	    {
	        if(arr[s]==arr[e])
	        {
	            s++;
	            e--;
	        }
	        else
	        {
	            if(arr[e]==k)
	            e--;
	            else if(arr[s]==k)
	            s++;
	            else
	            {
	                flag = 0;
	                break;
	            }
	        }
	    }
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}

}
