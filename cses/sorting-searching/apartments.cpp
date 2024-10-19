#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

void solve() {
  ll n, m, k;
  cin >> n >> m >> k;

  vll s(n), a(m);

  for (ll i = 0; i < n; ++i) {
    cin >> s[i];
  }

  for (ll i = 0; i < m; ++i) {
    cin >> a[i];
  }

  sort(s.begin(), s.end());
  sort(a.begin(), a.end());

  ll i = 0, j = 0, t = 0;

  while (i < n && j < m) {
    if (abs(s[i]-a[j]) <= k) {
      t++; // found
      i++;
      j++;
    } else if (s[i] - k > a[j]) {
      j++; // apartment is too small
    } else {
      i++; // desired size is too big
    }
  }

  cout << t << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
