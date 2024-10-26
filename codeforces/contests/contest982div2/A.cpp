#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int mh = 0;
  int mw = 0;

  while (n--) {
    int w, h;
    cin >> w >> h;

    mh = max(mh, h);
    mw = max(mw, w);
  }

  cout << 2 * (mh + mw) << "\n";
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
