#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

const ll MOD = 1e9 + 7;

void solve() {
  ll n, x, k;
  cin >> n >> x >> k;

  string commands;
  cin >> commands;

  ll change = 0;
  ll t = 0;

  for (char c : commands) {
    if (c == 'L') change--;
    else change++;
  }

  ll full = k / n;
  ll rem = k % n;

  ll pos = x + full * change;

  if (change != 0) {
    ll zeros = 0;
    ll temp = x;
    for (char c : commands) {
      if (c == 'L') temp--;
      else temp++;
      if (temp == 0) zeros++;
    }
    t += full * zeros;
  }

  cout << t << "\n";
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
