#include <bits/stdc++.h>
using namespace std;

double n;

bool good(double x) {
  return x * x + sqrt(x) >= n;
}

void solve() {
  cin >> n;

  double l = 0;
  double r = 1e10;

  for (int j = 0; j < 60; j++) {
    double m = l + (r - l) / 2;
    if (good(m)) r = m;
    else l = m;
  }

  cout << setprecision(20) << l << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
