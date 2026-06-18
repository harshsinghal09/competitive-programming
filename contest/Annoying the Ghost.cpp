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
	    vector<long long>arr(n),brr(n);
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
        for(int i=0; i<n; i++)
	    cin>>brr[i];
	    
        long long count = 0;
	   for(int i=0; i<n; i++)
       {
        if(arr[i]>brr[i])
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]<=brr[i])
                {
                    count += j-i;
                    int p=j;
                    int q = j-1;
                    int x = j-i;
                    while(x--)
                    {
                        swap(arr[p],arr[q]);
                        p--;
                        q--;
                    }
                    break;
                }
            }
        }
       }
       bool flag = 1;
       for(int i=0; i<n; i++)
       {
        if(arr[i]>brr[i])
        {
            flag = 0;
            break;
        }

       }
       if(flag)
       cout<<count<<endl;
       else
       cout<<-1<<endl;

	}

}
