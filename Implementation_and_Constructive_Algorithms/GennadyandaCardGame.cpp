#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<string>cards(5);
    for(int i=0; i<5; i++)
    {
        cin>>cards[i];
    }

    for(int i=0; i<5; i++)
    {
        if(s[0]==cards[i][0] || s[1]==cards[i][1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}