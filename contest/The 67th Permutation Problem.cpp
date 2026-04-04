#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

       vector<int>temp;
       int l=1,r=3*n;
       while(l<=r)
       {
        temp.push_back(r--);
        temp.push_back(r--);
        temp.push_back(l++);
       }

       for(int i=0; i<temp.size(); i++)
       cout<<temp[i]<<" ";
       cout<<endl;
    }
}