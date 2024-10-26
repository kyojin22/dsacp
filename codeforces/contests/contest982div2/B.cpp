#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  int ans = n;
  for (int i = 0; i < n; i++) {
    int res = 0;
    for (int j = 0; j < n; j++) {
      if (j < i || a[j] > a[i]) {
        res++;
      }
    }
    ans = min(ans, res);
  }

  cout << ans << "\n";
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
