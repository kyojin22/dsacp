#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, r;
  cin >> n >> r;

  int rem = 0;
  int happy = 0;

  for (int i = 0; i < n; i++) {
    int f;
    cin >> f;

    if (f % 2 != 0) rem++;
    r -= f / 2;
    happy += f % 2 == 0 ? f : f - 1;
  }

  if (r >= rem) happy += rem;
  else happy += 2 * r - rem;

  cout << happy << "\n";
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
