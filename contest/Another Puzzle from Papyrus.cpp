#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c;
	    cin>>n>>c;
	    vector<long long>arr(n),brr(n);
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
        for(int i=0; i<n; i++)
	    cin>>brr[i];

        long long ans = LLONG_MAX;
        long long count = 0;
        bool flag = 1;
        //without reorder
        for(int i=0; i<n; i++)
        {
            if(arr[i]<brr[i])
            {
                flag = 0;
                break;
            }
            count += arr[i]-brr[i];
        }
        if(flag)
        ans = min(ans,count);

        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());

        flag = 1;
        count = c;
         for(int i=0; i<n; i++)
        {
            if(arr[i]<brr[i])
            {
                flag = 0;
                break;
            }
            count += arr[i]-brr[i];
        }
        if(flag)
        ans = min(ans,count);

        if(ans==LLONG_MAX)
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
	    
        

	}

}
