#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y, k;
  cin >> x >> y >> k;

  int a = min(x, y);
  assert(a * a * 2 >= k * k);
  cout << 0 << " " << 0 << " " << a << " " << a << "\n";
  cout << 0 << " " << a << " " << a << " " << 0 << "\n";
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
