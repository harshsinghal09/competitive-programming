#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(2*k>n)
        {
            cout<<-1<<endl;
            continue;
        }

        int flip = 0;
        for(int i=0; i<k; i++)
        {
            if(s[i]=='L')
            flip++;
        }
        for(int i=n-k; i<n; i++)
        {
            if(s[i]=='R')
            flip++;
        }

        cout<<flip<<endl;

       
    }
}