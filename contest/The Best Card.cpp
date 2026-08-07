#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;

        bool flag = 1;
        for(int i=2; i*i<=n+1; i++)
        {
            if((n+1)%i==0)
            {
                flag = 0;
                break;
            }
        }
       
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
	
	    
	}

}
