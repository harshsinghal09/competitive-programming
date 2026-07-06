#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int k;
	    cin>>k;
	    vector<int>arr(k);
	    for(int i=0; i<k; i++)
	    cin>>arr[i];

        bool ok = 0;
        int count = 0;
        for(int i=0; i<k; i++)
        {
            if(arr[i]>=3)
            ok = 1;
            if(arr[i]>=2)
            count++;
        }
        if(ok || count>=2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
	    
	   
	}

}
