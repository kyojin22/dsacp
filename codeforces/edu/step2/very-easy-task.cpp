#include <bits/stdc++.h>
using namespace std;

int n, x, y;

bool good(int t) {
  if (t < min(x, y)) return false;
  t -= min(x, y);
  return t / x + t / y + 1 >= n;
}

void solve() {
  cin >> n >> x >> y;

  int l = 0;
  int r = max(x, y) * n;

  while (r > l + 1) {
    int m = l + (r - l) / 2;
    if (good(m)) r = m;
    else l = m;  
  }

  cout << r << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
