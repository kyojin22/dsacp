#include <bits/stdc++.h>
using namespace std;

int k, n;
vector<long long> a;

bool good(long long x) {
  long long s = 0;
  for (int i = 0; i < n; i++) {
    s += min(a[i], x);
  }

  return s / x >= k;
}


void solve() {
  cin >> k >> n;

  a.resize(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  long long l = 0, r = 25 * 1e9 + 10;
  while (r > l + 1) {
    long long m = l + (r - l) / 2;
    if (good(m)) {
      l = m;
    } else {
      r = m;
    }
  }

  cout << l << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
