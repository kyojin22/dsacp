#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

const long long MOD = 1e9 + 7;

bool can_find_n(int x, int y) {
  if (y == x + 1) return true;
  
  if (x > y) {
    for (int k = 1; k <= (x - y + 8) / 9; k++) {
      if (y == x - 9 * k + 1) return true;
    }
  }

  return false;
}

void solve() {
  int x, y;
  cin >> x >> y;

  if (can_find_n(x, y)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
