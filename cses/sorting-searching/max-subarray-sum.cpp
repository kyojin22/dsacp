#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  vector<long long> dp(n);
  dp[0] = a[0];
  for (int i = 1; i < n; i++) {
    dp[i] = max(a[i], dp[i - 1] + a[i]);
  }
  
  cout << *max_element(dp.begin(), dp.end()) << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();

  return 0;
}
