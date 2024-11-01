#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<long long> a;

bool good(int x) {
  int c = 1, lp = 0;
  for (int j = 1; j < n; j++) {
    if (a[j] - a[lp] >= x) {
      lp = j;
      c++;
    }
  }

  return c >= k;
}

void solve() {
  cin >> n >> k;
  a.resize(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  int l = 1, r = a[n - 1] - a[0], res = 0;

  while (r >= l) {
    int m = l + (r - l) / 2;
    if (good(m)) {
      res = m;
      l = m + 1;
    }
    else r = m - 1;
  }

  cout << res << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
