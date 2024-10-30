#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  int i = 0, j = 0;
  long long k = 0;
  while (i < n && j < m) {
    if (a[i] < b[j]) {
      ++i;
      while (i < n && a[i] == a[i - 1]) ++i;
    } else if (a[i] > b[j]) {
      ++j;
      while (j < m && b[j] == b[j - 1]) ++j;
    } else {
      int ca = 1, cb = 1;

      ++i;
      while (i < n && a[i] == a[i - 1]) {
        ca++;
        ++i;
      }

      ++j;
      while (j < m && b[j] == b[j - 1]) {
        cb++;
        ++j;
      }

      k += static_cast<long long>(ca) * cb;
    }
  }

  cout << k << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
