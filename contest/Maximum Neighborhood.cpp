#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        if (n == 1) {
            cout << 1 << '\n';
        } else if (n == 2) {
            cout << 9 << '\n';
        } else if (n == 3) {
            cout << 29 << '\n';
        } else {
            cout << 4*n*n - 4*n + 1 << '\n';
        }

    }
}