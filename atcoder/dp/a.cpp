#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  vector<long long> dp(n, MOD);
  dp[0] = 0;
  
  for (int i = 0; i < n; i++) {
    if (i + 1 < n) {
      dp[i + 1] = min(dp[i + 1], dp[i] + abs(a[i] - a[i + 1]));
    }

    if (i + 2 < n) {
      dp[i + 2] = min(dp[i + 2], dp[i] + abs(a[i] - a[i + 2]));
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
