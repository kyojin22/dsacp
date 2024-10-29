#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<char> dp(n, '3');
  dp[dp.size() - 1] = '6';
  string ans;

  if (n % 2 == 0) {
    dp[dp.size() - 2] = '6';

    for (char e : dp) {
      ans += e;
    }

    cout << ans << "\n";
  } else if (n >= 5) {
    dp[dp.size() - 2] = '6';
    dp[dp.size() - 4] = '6';

    for (char e : dp) {
      ans += e;
    }

    cout << ans << "\n";
  } else {
    cout << "-1\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
  
  return 0;
}
