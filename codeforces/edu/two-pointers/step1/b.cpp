#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m), res(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  // int i = 0, j = 0;
  // while (i < n || j < m) {
  //   if (j == m || (i < n && a[i] < b[j])) i++;
  //   else res[j++] = i;
  // }

  int i = 0;
  for (int j = 0; j < m; j++) {
    while (i < n && a[i] < b[j]) {
      i++;
    }
    res[j] = i;
  }

  for (int x : res) {
    cout << x << " ";
  }

  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
