#include <bits/stdc++.h>
using namespace std;

string a, b;

// RECURSION
// int lev(int i, int j) {
//   if (min(i, j) == 0) {
//     return max(i, j);
//   }
//   return min({ lev(i - 1, j) + 1, lev(i, j - 1) + 1, lev(i - 1, j - 1) + (a[i - 1] == b[j - 1] ? 0 : 1) });
// }

void solve() {
  cin >> a >> b;

  int n = a.length(), m = b.length();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  for (int i = 1; i <= n; i++) dp[i][0] = i;
  for (int j = 1; j <= m; j++) dp[0][j] = j;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      // dp[i][j] = lev(i, j);

      // if (min(i, j) == 0) {
      //   dp[i][j] = max(i, j);
      // } else {
      //   dp[i][j] = min({ (dp[i - 1][j] + 1), (dp[i][j - 1] + 1), (dp[i - 1][j - 1] + (a[i - 1] == b[j - 1] ? 0 : 1)) });
      // }

      if (a[i - 1] == b[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1];
      } else {
        dp[i][j] = min({ dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] }) + 1;
      }

    }
  }

  cout << dp[n][m] << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
