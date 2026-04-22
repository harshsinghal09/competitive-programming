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
	    vector<int>arr(n);
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    
	    vector<int>left(n);
	    vector<int>right(n);
	   for(int i=0; i<n; i++)
	   {
	       int track = 0;
	       for(int j=i-1; j>=0; j--)
	       {
	           if(arr[j]<arr[i])
	           track++;
	       }
	       left[i] = track;
	   }
	   
	    for(int i=0; i<n; i++)
	   {
	       int track = 0;
	       for(int j=i+1; j<n; j++)
	       {
	           if(arr[j]>arr[i])
	           track++;
	       }
	       right[i] = track;
	   }
	   int count = 0;
	   for(int i=0; i<n; i++)
	   {
	       if(left[i]==right[i])
	       count++;
	   }
	   
	   cout<<count<<endl;
	    
	}

}
