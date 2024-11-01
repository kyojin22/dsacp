#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

void solve() {
  long long n, x;
  cin >> n >> x;

  vector<long long> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  vector<long long> dp(x + 1, 0);
  dp[0] = 1;

  for (int i = 1; i <= x; i++) {
    for (int j = 0; j < n; j++) {
      if (i - a[j] >= 0) {
        dp[i] += dp[i - a[j]];
      }
    }

    dp[i] = dp[i] % MOD;
  }

  cout << dp[x] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
