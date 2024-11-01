#include <bits/stdc++.h>
using namespace std;
  
int n, k;
vector<long long> a;

bool good(long long x) {
  int s = 1;
  long long cs = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > x) return false;
    if (cs + a[i] > x) {
      s++;
      cs = a[i];
      if (s > k) return false;
    } else {
      cs += a[i];
    }
  }
  return true;
}

void solve() {
  cin >> n >> k;

  a.resize(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  long long l = *max_element(a.begin(), a.end());
  long long r = accumulate(a.begin(), a.end(), 0LL);
  long long res = r;

  while (l <= r) {
    long long m = l + (r - l) / 2;
    if (good(m)) {
      res = m;
      r = m - 1; 
    } else {
      l = m + 1;
    }
  }

  cout << res << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
