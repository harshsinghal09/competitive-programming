#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string>s(10);
        for(int i=0; i<10; i++)
        cin>>s[i];

        int target = 0;
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                if(s[i][j]=='X')
                {
                    int temp = min({i,j,9-i,9-j});
                    target += temp+1;
                }
            }
        }
        cout<<target<<endl;

    }
}