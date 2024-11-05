#include <bits/stdc++.h>
using namespace std;

long long a, b;

bool good(long long m) {
  long long x = (m * (m - 1) / 2);
  return x <= b;
}

void solve() {
  cin >> a >> b;
  b -= a;

  long long l = 1, r = 1e9;
  while (r > l + 1) {
    long long m = l + (r - l) / 2;
    if (good(m)) l = m;
    else r = m;
  }

  cout << l << "\n";
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
