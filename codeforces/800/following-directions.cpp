#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;

  pair<int, int> a = {0, 0}, c = {1, 1};
  bool p = false;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'U') a.second++;
    else if (s[i] == 'D') a.second--;
    else if (s[i] == 'R') a.first++;
    else a.first--;

    if (a.first == c.first && a.second == c.second) p = true;
  }

  if (p) cout << "YES\n";
  else cout << "NO\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
  
  return 0;
}
