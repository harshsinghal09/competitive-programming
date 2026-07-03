#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x==y)
	    return 0;
	    int time = 0;
	    while(x!=y)
	    {
	        int a = x;
	        if(a%10)
	        time += a/10+1;
	        else
	        time += a/10;
	        
	        x--;
	    }
	    cout<<time<<endl;
	}

}
