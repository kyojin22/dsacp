#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;

  int d = abs(a-b);
  int m = d / 3;
  if (d % 3 != 0) m++;

  cout << m << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
