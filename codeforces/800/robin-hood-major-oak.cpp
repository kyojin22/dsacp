#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;

  long long s = k * (2 * n - k + 1) / 2;
  
  if (s % 2 == 0) cout << "YES\n";
  else cout << "NO\n";
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
