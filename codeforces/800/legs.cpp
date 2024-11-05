#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int c = n / 4 + (n % 4 == 0 ? 0 : 1);

  cout << c << "\n"; 
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
