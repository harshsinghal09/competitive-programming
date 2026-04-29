#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int ans = 0;
	    for(int i=0; i<n; i++)
	    {
	        int length = 0;
	        for(int j=i; j<n; j++)
	        {
	            int pos = j-i;
	            if(pos%2==0)
	            {
	                if(s[j]=='u' || s[j]=='o')
	                length++;
	                else 
	                break;
	            }
	            else
	            {
	                if(s[j] == 'w')
                    length++;
                    else 
                    break;
	            }
	            if(length%2 == 1)
	            ans = max(ans,length);
	        }
	        
	    }
	    cout<<ans<<endl;
	}

}
