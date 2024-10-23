#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int drinks = k * l / nl;
  int limes = c * d;
  int salt = p / np;

  cout << min({ drinks, limes, salt }) / n << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
