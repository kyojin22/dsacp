#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  int minleft = 240 - k;
  int t = 0;
  for (int i = 1; i <= n; i++) {
    if (5*i <= minleft) {
      t++;
      minleft -= 5*i;
    }
  }
  cout << t << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();

  return 0;
}
