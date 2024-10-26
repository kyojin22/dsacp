#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define PB push_back

void solve() {
  int n;
  cin >> n;

  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  unordered_set<int> idxs;
  bool z;
  int mx;
  do {
    z = false;
    mx = -1;

    for (int i = 1; i <= n; i++) {
      if (n + 1 - i == a[i-1] && idxs.find(i-1) == idxs.end()) {
        mx = max(mx, i);
      }
    }

    if (mx > 0) {
      for (int j = 0; j < mx - 1; j++) {
        a.PB(0);
      }
      n = a.size();
      idxs.insert(mx-1);
      z = true;
    }

  } while (z);

  cout << a.size() << "\n";
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
