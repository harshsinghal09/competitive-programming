#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = INT_MAX;
        for(char i='a'; i<='z'; i++)
        {
            
            int st=0,e=n-1;
            int temp = 0;
            while(st<e)
            {
                if(s[st]==s[e])
                {
                    st++;
                    e--;
                }
                else if(s[st]!=s[e])
                {
                    
                    if(s[st]==i)
                    {
                        st++;
                        temp++;
                    }
                    else if(s[e]==i)
                    {
                        e--;
                        temp++;
                    }
                    else
                    {
                        temp = INT_MAX;
                        break;
                    }
                }
            }
            if(temp!=INT_MAX)
            {
            ans = min(ans,temp);
            }


        }
        
        if(ans==INT_MAX)
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }
}