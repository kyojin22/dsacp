#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];
  
  int i = 0, j = 0;
  while (i < n || j < m) {
    if ((a[i] < b[j] && i < n) || j == m) {
      cout << a[i++] << " ";
    } else {
      cout << b[j++] << " ";
    }
  }  

  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
