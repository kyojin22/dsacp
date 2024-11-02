#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  int q;
  cin >> s >> q;

  set<int> indices;
  int n = s.size();

  for (int i = 0; i <= n - 4; i++) {
    if (s.substr(i, 4) == "1100") {
      indices.insert(i);
    }
  }

  for (int j = 0; j < q; j++) {
    int i;
    char v;
    cin >> i >> v;
    i--;

    s[i] = v;

    for (int k = max(0, i - 3); k <= min(n - 4, i); k++) {
      if (s.substr(k, 4) == "1100") {
        indices.insert(k);
      } else {
        indices.erase(k);
      }
    }

    if (!indices.empty()) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
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
