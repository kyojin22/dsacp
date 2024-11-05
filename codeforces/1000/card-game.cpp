#include <bits/stdc++.h>
using namespace std;

int round(int a, int b) {
  if (a > b) return 1;
  else if (a < b) return -1;
  else return 0;
}

void solve() {
  int a1, a2, b1, b2;
  cin >> a1 >> a2 >> b1 >> b2;

  int w = 0;

  if (round(a1, b1) + round(a2, b2) >= 1) {
    w++;
  } 

  if (round(a1, b2) + round(a2, b1) >= 1) {
    w++;
  }

  if (round(a2, b2) + round(a1, b1) >= 1) {
    w++;
  }

  if (round(a2, b1) + round(a1, b2) >= 1) {
    w++;
  }

  cout << w << "\n";
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
