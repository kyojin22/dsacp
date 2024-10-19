#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
  ll n;
  cin >> n;

  set<ll> s;

  for (ll i = 0; i < n; ++i) {
    ll num;
    cin >> num;
    s.insert(num);
  }

  cout << s.size() << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();

  return 0; 
}
