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
        vector<long long>arr(n);
        for(int i=0; i<n; i++)
        cin>>arr[i];

        long long need = 1;
        bool ok = 1;
        for (int i = 0; i < n; i++) {
        if (arr[i]<need)
        {
            ok = 0;
            break;
        }

            // Extra books next stack ko bhej do
            if (i+1<n)
            arr[i+1] += (arr[i] - need);

            need++;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    }

