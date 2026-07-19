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
	    vector<int>a(n),b(n);
	    bool same = true;
        bool allZero = true;
        bool allOne = true;

        int x = 0; 
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]==1) allZero = false;
        }

        for (int i=0; i<n; i++)
        {
            cin>>b[i];

            if (a[i]!=b[i]) same = false;
            if (b[i] == 0) allOne = false;

            if (a[i] == 1 && b[i] == 0)
                x++;
        }

        if(same)
        cout<<0<<'\n';
        
        else if (allZero)
        cout<<-1<<'\n';
        
        else if (allOne)
        cout<<-1<<'\n';
        
        else if (x & 1)
        cout<<1<<'\n';
        
        else 
        cout<<2<<'\n';
        

	    
	    
	    
	}

}
