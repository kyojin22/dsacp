#include <bits/stdc++.h>
using namespace std;

struct P {
  long long x;
  long long v;
};

int n;
vector<P> a;

bool good(double t) {
  double l = -1e9, r = 1e9;
  for (P p : a) {
    double lp = p.x - t * p.v;
    double rp = p.x + t * p.v;
    l = max(l, lp);
    r = min(r, rp);
    if (l > r) return false;
  }
  return true;
}

void solve() {
  cin >> n;
  a.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].x >> a[i].v;
  }

  double l = 0.0, r = 2 * 1e9;
  for (int i = 0; i < 100; i++) {
    double m = l + (r - l) / 2;
    if (good(m)) r = m;
    else l = m;
  }
  
  cout << setprecision(20) << r << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
