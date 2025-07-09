#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, b, s;
  cin >> n >> b >> s;

  vector<vector<int>> dp(n + 1, vector<int>(s + 1, 0));
    
    // Base case: There's one 0-digit number with sum 0
    dp[0][0] = 1;
    
    for (int len = 1; len <= n; len++) {
        for (int sum = 0; sum <= s; sum++) {
            // For each possible digit value
            for (int digit = 0; digit < b; digit++) {
                // If we're on the most significant digit, we can't use 0
                if (len == n && digit == 0) continue;
                
                // If using this digit leads to a valid sum
                if (sum >= digit) {
                    dp[len][sum] += dp[len-1][sum-digit];
                }
            }
        }
    }
    
    cout << dp[n][s] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }
  
  return 0;
}
