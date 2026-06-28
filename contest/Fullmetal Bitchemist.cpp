#include <bits/stdc++.h>
using namespace std;
unordered_map<string,bool> dp;

bool check(string s)
{
    if(s.size()==1) return true;

    if(dp.count(s))
        return dp[s];

    for(int i=0;i+1<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            string t=s;
            char ch=(t[i]=='0')?'1':'0';

            t.erase(i,2);
            t.insert(t.begin()+i,ch);

            if(check(t))
                return dp[s]=true;
        }
    }

    return dp[s]=false;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
        cin>>s;

        long long count = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                string sub = s.substr(i,j-i+1);
                if(check(sub))
                count++;
            }
        }
        cout<<count<<endl;
	}

}
