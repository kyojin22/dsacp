#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

void solve() {
  long long n;
  cin >> n;
  int steps = 0;

  while (n > 0) {
    string s = to_string(n);
    char mxd = *max_element(s.begin(), s.end());
    n -= (mxd - '0');
    steps++;
  }

  cout << steps << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
