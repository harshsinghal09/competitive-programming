#include <bits/stdc++.h>
using namespace std;

int countMoves(int x) {
    int cnt = 0;
    while (x > 0) {
        if (x % 2 == 0) x /= 2;
        else x--;
        cnt++;
    }
    return cnt;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());
    
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += countMoves(a[i]);
    }
    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}