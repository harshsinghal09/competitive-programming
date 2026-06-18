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
	    vector<long long>arr(n);
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	   for(int i=0; i<n-1; i++)
       {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i+1];
            arr[i+1] = arr[i+1]+arr[i];
            arr[i] = temp;
        }
       }
       cout<<arr[n-1]<<endl;
	}

}
