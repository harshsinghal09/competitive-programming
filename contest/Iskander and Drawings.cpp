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
	    string s;
        cin>>s;
        int count = 0;
        int mx = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='#')
            {
                count++;
            }
            else
            {
                mx = max(mx,count);
                count = 0;
            }
        }
        mx = max(mx, count);
        cout<<(mx+1)/2<<endl;
	}

}
