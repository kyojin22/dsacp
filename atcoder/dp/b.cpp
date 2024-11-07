#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  vector<long long> dp(n, MOD);
  dp[0] = 0;
  
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= k; j++) {
      if (i + j < n) {
        dp[i + j] = min(dp[i + j], dp[i] + abs(a[i] - a[i + j]));
      }
    }
  }

  cout << dp[n - 1] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
