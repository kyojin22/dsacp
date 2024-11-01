#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

void solve() {
  int n;
  cin >> n;

  vector<long long> dp(n + 1, 0);
  dp[0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < 7; j++) {
      if (i - j >= 0) {
        dp[i] += dp[i - j];
      }
    }

    dp[i] %= MOD;
  }

  cout << dp[n] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();  
  
  return 0;
}
