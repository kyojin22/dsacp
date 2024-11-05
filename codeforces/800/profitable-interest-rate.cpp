#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long a, b;
  cin >> a >> b;

  if (a >= b) {
    cout << a << "\n";
    return;
  }

  long long x = b - a;

  if (x > a) cout << "0\n";
  else cout << a - x << "\n";
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
