#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, b;
  string s;
  cin >> n >> a >> b >> s;
  int x = 0, y = 0;

  for (int j = 0; j < 100; j++) {
    for (int i = 0; i < n; i++) {
      if (s[i] == 'N') y++;
      else if (s[i] == 'E') x++;
      else if (s[i] == 'S') y--;
      else x--;

      if (x == a && y == b) {
        cout << "YES\n";
        return;
      }
    }
  }

  cout << "NO\n";
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
