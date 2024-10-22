#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int sum_x = 0, sum_y = 0, sum_z = 0;

  while (n--) {
    int x, y, z;
    cin >> x >> y >> z;

    sum_x += x;
    sum_y += y;
    sum_z += z;
  }

  if (sum_x == 0 && sum_y == 0 && sum_z == 0) cout << "YES\n";
  else cout << "NO\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
