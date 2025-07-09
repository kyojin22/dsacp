#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<vector<ll>> dp(n, vector<ll>(n, -1));
    
    function<ll(int,int)> calculate = [&](int left, int right) -> ll {
        if (left > right) return 0;
        if (left == right) return abs(a[left]);
        
        if (dp[left][right] != -1) return dp[left][right];
        
        ll result = 0;
        
        for (int i = left; i <= right; i++) {
            ll current = abs(a[i]);
            
            if (a[i] < 0) {
                result = max(result, current + calculate(left, i-1));
            }

            else {
                result = max(result, current + calculate(i+1, right));
            }
        }
        
        return dp[left][right] = result;
    };
    
    cout << calculate(0, n-1) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
