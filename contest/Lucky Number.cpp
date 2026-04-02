#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int p=0;
	    while(n%2==0)
	    {
	        p++;
	        n/=2;
	    }
	    if(p%2==0)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}

}
