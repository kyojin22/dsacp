#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;

  int m = x1 + x2 + x3 - min({x1, x2, x3}) - max({x1, x2, x3});

  cout << abs(x1 - m) + abs(x2 - m) + abs(x3 - m) << "\n";
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
