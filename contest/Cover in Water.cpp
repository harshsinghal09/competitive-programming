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
        int counthash = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='#')
            counthash++;
        }
        if(counthash==s.size())
        {
            cout<<0<<endl;
            continue;
        }
        int countdot = 0;
        int temp = 0;
        for(int i=0; i<s.size(); i++)
        {
            while(i<s.size() && s[i]=='.')
            {
                countdot++;
                i++;
            }
            temp = max(countdot,temp);
            countdot = 0;
        }
        if(temp>=3)
        {
            cout<<2<<endl;
            continue;
        }

        countdot = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='.')
            countdot++;
        }
        cout<<countdot<<endl;

    }
}