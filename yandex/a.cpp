#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a;
  cin >> a;

  if (a == 0 || a == 1 || a == -1) cout << 1 << "\n";
  else cout << 0 << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }
  
  return 0;
}
