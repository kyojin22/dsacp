#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool divide(string& n_str, int k, int l, int idx) {
  if (idx == n_str.size()) return true;

  ll num = 0;

  for (int i = 0; i < l && idx + i < n_str.size(); ++i) {
    num = num * 10 + (n_str[idx + i] - '0');
    if (num % k == 0) {
      if (divide(n_str, k, l, idx + i + 1)) return true;
    }
  }

  return false;
}

void solve() {
  string n_str;
  ll k;
  int l;
  cin >> n_str >> k >> l;

  if (divide(n_str, k, l, 0)) cout << 1 << "\n";
  else cout << 0 << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();

  return 0;
}
