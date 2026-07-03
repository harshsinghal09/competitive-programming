#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;

    while(T--)
    {
        int N,L,R;
        cin>>N>>L>>R;

        int left=0,right=0;

        for(int i=1;i<=N;i++)
        {
            int x;
            cin>>x;

            if(i<L)
                left+=x;
            else if(i>R)
                right+=x;
        }

        cout<<max(left,right)<<"\n";
    }
return 0;

}
