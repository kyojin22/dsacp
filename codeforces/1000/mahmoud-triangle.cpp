#include <bits/stdc++.h>
using namespace std; 

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a.begin(), a.end());

  for (int i = 0; i < n - 2; i++) {
    if (a[i] + a[i + 1] > a[i + 2]) {
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  solve();
  return 0;
}
