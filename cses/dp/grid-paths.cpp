#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

void solve() {
  int n;
  cin >> n;

  vector<vector<long long>> dp(n, vector<long long>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      char ch;
      cin >> ch;
      dp[i][j] = ch == '.' ? 0 : -1;
    }
  }

  if (dp[0][0] == -1 || dp[n - 1][n - 1] == -1) {
    cout << "0\n";
    return;
  }

  dp[0][0] = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (dp[i][j] == -1) continue;

      if (i - 1 >= 0 && dp[i - 1][j] != -1) {
        dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
      }

      if (j - 1 >= 0 && dp[i][j - 1] != -1) {
        dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
      }
    }
  }

  cout << dp[n - 1][n - 1] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
