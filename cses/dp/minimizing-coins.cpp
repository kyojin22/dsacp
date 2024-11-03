#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  long long x;
  cin >> n >> x;

  vector<long long> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  vector<long long> dp(x + 1, x + 1);
  dp[0] = 0;

  for (int i = 1; i <= x; i++) {
    for (int j = 0; j < n; j++) {
      if (i - a[j] >= 0) {
        dp[i] = min(dp[i], dp[i - a[j]] + 1);
      }
    }
  }

  if (dp[x] == x + 1) cout << -1 << "\n";
  else cout << dp[x] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();

  return 0;
}
