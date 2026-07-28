#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;

        vector<int> arr(n);
        for (int i=0; i<n; i++)
            cin>>arr[i];

        // Remove consecutive duplicates
        vector<int> b;
        b.push_back(arr[0]);
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1])
                b.push_back(arr[i]);
        }

        int m = b.size();

        if (m == 1){
            cout<<1<<'\n';
            continue;
        }

        int ans = 2; // first and last

        for (int i=1; i<m-1; i++) {
            if ((b[i] > b[i - 1] && b[i] > b[i + 1]) ||
                (b[i] < b[i - 1] && b[i] < b[i + 1])) {
                ans++;
            }
        }

        cout<<ans<<'\n';
    }
}