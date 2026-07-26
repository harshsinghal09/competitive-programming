#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y,z;
        cin>>n>>x>>y>>z;

        int withoutAI = n/(x+y);
        if(withoutAI==0)
        withoutAI = 1;
        else if(n%(x+y)!=0)
        withoutAI++;

        int temp = 0;
        int hours = 0;
        for(int i=0; i<z && temp<n; i++)
        {
            temp += x;
            hours++;
        }

        if(temp < n)
        {
            while(temp < n)
            {
                temp += x;
                temp += 10 * y;
                hours++;
            }
        }

        int withAI = hours;

        cout<<min(withAI,withoutAI)<<endl;
        
	    
	}

}
