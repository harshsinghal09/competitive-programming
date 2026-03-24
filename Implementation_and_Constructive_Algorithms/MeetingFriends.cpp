#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int a = abs(x1 - x2);
    int b = abs(x2 - x3);
    int c = abs(x1 - x3);
    if(a>b && a>c)
        cout<<b+c<<endl;
    else if(b>c && b>a)
        cout<<a+c<<endl;
    else
        cout<<a+b<<endl;
    
}