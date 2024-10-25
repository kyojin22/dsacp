#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;

bool good(double x) {
  int s = 0;
  
  for (int i = 0; i < n; i++) {
    s += floor(a[i] / x);
  }

  return s >= k;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  cin >> n >> k;
  a.resize(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  
  double l = 0;
  double r = 1e8;

  for (int j = 0; j < 100; j++) {
    double m = (l + r) / 2;
    if (good(m)) l = m;
    else r = m;
  }

  cout << setprecision(20) << l << "\n";

  return 0;
}
