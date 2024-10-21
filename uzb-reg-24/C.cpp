#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<double> vd;

void solve() {
  int u, m;
  cin >> u >> m;

  vd s(4);
  vi p(4);

  for (int i = 0; i < 15; i++) {
    int t;
    double c;
    cin >> t >> c;

    double sal = c / t;

    for (int j = 0; j < t; j++) {
      s[j] += sal;
      p[j]++;
    }
  }

  for (int i = 0; i < 4; i++) {
    double tc = s[i];

    if (p[i] < 15) tc += m * (15 - p[i]);

    if (tc > u) tc += tc - u;

    cout << fixed << setprecision(4) << tc << "\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();

  return 0;
}
