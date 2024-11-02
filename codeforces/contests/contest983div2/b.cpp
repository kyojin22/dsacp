#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;

  if (n == 1) {
    cout << 1 << "\n";
    cout << 1 << "\n";
    return;
  }

  if (k % 2 == 0) {
    cout << "3\n";
    cout << 1 << " " << k << " " << k + 1 << "\n";
    return;
  }

  if (k == 1 || k == n) {
    cout << "-1\n";
    return;
  }

  cout << "5\n";
  cout << 1 << " " << 2 << " " << k << " " << k + 1 << " " << k + 2 << "\n";
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
