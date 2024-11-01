#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll w, h, n;

bool good(ll x) {
  return (x / w) * (x / h) >= n;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  cin >> w >> h >> n;

  ll l = 0;
  ll r = 1;
  while (!good(r)) r *= 2;

  while (r > l + 1) {
    ll m = (r + l) / 2;
    if (good(m)) r = m;
    else l = m;
  }

  cout << r << "\n";

  return 0;
}
