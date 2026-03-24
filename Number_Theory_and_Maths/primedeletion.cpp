#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                cout<<"13"<<endl;
                break;
            }
            else if(s[i]=='3')
            {
                cout<<"31"<<endl;
                break;
            }
        }
    }
}
