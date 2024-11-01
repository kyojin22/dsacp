#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  pair<int, int> c = {0, 0};
  for (int i = 0; i < 2 * n; i++) {
    int num;
    cin >> num;
    if (num == 0) {
      c.first++;
    } else {
      c.second++;
    }
  }

  int mx = min(c.first, c.second);
  int mn = (c.first % 2 + c.second % 2) / 2;
  cout << mn << " " << mx << "\n";
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
