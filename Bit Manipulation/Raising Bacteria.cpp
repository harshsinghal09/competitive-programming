#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int count = 0;
   
    while(x)
    {
        int ld = x%2;
        x/=2;
        if(ld==1)
        count++;
    }
    cout<<count;

}