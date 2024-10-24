#include <bits/stdc++.h>
using namespace std;

void solve() {
  pair<int, int> c;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      int n;
      cin >> n;
      if (n == 1) c = {i + 1, j + 1};
    }
  }

  cout << abs(c.first-3) + abs(c.second-3) << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
