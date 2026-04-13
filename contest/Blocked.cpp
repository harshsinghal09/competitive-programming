#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        // Check if any number appears more than once
        bool hasDuplicate = false;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(a[i] == a[j]){
                    hasDuplicate = true;
                }
            }
        }
        
        // If duplicate exists, answer is impossible
        if(hasDuplicate){
            cout << -1 << "\n";
            continue;
        }
        
        // Sort in descending order (largest first)
        sort(a.begin(), a.end(), greater<int>());
        
        for(int i = 0; i < n; i++){
            cout << a[i];
            if(i < n-1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}