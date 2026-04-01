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
	    
	    unordered_map<int,int>m;
	    for(int i=0; i<n; i++)
	    m[arr[i]-i]++;
	    
	    int count = 0;
	    for(auto &i : m)
	    {
	        int k = i.second;
	        count += k*(k-1)/2;
	    }
	    cout<<count<<endl;
	}

}
