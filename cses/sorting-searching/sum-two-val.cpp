#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve() {
  ll n, x;
  cin >> n >> x;

  map<ll, ll> m;
  ll i = 0;
  bool found = false;

  while (n--) {
    ll num;
    cin >> num;
    i++;
    ll rem = x - num;

    if (m.find(rem) != m.end()) {
      found = true;
      cout << m[rem] << " " << i << "\n";
      return;
    }

    m.insert({num, i});
  } 

  if (!found) cout << "IMPOSSIBLE\n";

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();

  return 0;
}
