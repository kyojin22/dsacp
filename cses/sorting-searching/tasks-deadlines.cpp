#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<pair<int, int>> t(n);
  for (int i = 0; i < n; i++) {
    long long a, d;
    cin >> a >> d;
    t[i] = make_pair(a, d);
  }
  sort(t.begin(), t.end());
  
  long long mx = 0;
  long long d = 0;
  
  for (int i = 0; i < n; i++) {
    d += t[i].first;
    mx += t[i].second - d;
  }

  cout << mx << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
