#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin>>s;

        int curr = 1;
        int time = 0;

        for(char c : s)
        {
            int digit = (c == '0' ? 10 : c - '0');

            time += abs(curr - digit); // linear movement
            time += 1; // press

            curr = digit;
        }

        cout<<time<<endl;
    }
}