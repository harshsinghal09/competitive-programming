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
       int turns = 0;
       while(1)
       {
        if(n%3==0)
        n++;
        else if((n+1)%3==0)
        n++;
        else if((n-1)%3==0)
        n--;

       turns+=2;
       if(turns==10 && n%3==0)
       {
        cout<<"First\n";
        break;
       }
       else if(turns>10)
       {
        cout<<"Second\n";
        break;
       }

       }


    }

}