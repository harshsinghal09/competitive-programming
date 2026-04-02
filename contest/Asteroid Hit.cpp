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
	    
	   vector<pair<int, pair<long long,int>>> ast(n);
	    for(int i=0; i<n; i++)
	    {
	        int d;
	        long long s;
	        cin >> d >> s;
	        ast[i] = {d, {s, i+1}};
	    }
	    
	    vector<pair<int, pair<long long,int>>> st;
	    for(int i=0; i<n; i++)
	    {
	        int dir = ast[i].first;
	        long long size = ast[i].second.first;
	        int idx = ast[i].second.second;
	        if(dir==1)
	        {
	            st.push_back({dir, {size, idx}});
	        }
	        else
	        {
	            while(!st.empty() && st.back().first==1)
	            {
	                long long topSize = st.back().second.first;
	                
	                if(topSize==size)
	                {
	                    st.pop_back();
	                    size=0;
	                    break;
	                }
	                else if(topSize>size)
	                {
	                    st.back().second.first += size;
	                    size = 0;
	                    break;
	                }
	                else
	                {
	                    size += topSize;
	                    st.pop_back();
	                }
	                
	            }
	            if(size>0)
	            st.push_back({dir, {size, idx}});
	        }
	    }
	   vector<int> ans;
	    for (int i = 0; i<st.size(); i++) 
	    ans.push_back(st[i].second.second);
	    
	    sort(ans.begin(), ans.end());
	    cout<<ans.size()<<endl;
	    if(ans.size())
	    {
	        for (int i = 0; i < ans.size(); i++) {
	        cout << ans[i] << " ";
	    }
	    cout << endl;
	  }      
	    
	}

}
