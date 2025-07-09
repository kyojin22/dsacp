#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) cin >> a[i];

  map<ll, ll> prefix;
  prefix[0] = 1;

  ll odd = 0, even = 0;
  ll goods = 0;

  for (int i = 1; i <= n; i++) {
    if (i % 2 == 1) odd += a[i];
    else even += a[i];

    ll diff = odd - even;
    goods += prefix[diff];
    prefix[diff]++;
  }

  cout << goods << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) solve();

  return 0;
}
