#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, W;
  cin >> n >> W;

  vector<int> w(n);
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> w[i];
  for (int i = 0; i < n; i++) cin >> v[i];

  vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= W; j++) {
      dp[i][j] = dp[i - 1][j];
      if (j - w[i - 1] >= 0) {
        dp[i][j] = max(dp[i][j], v[i - 1] + dp[i - 1][j - w[i - 1]]);
      }
    }
  }
  
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= W; j++) {
      cout << dp[i][j] << " ";
    }
    cout << "\n";
  }

  cout << dp[n][W] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
