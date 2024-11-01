#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;
vector<int> a(3, 0);
int nb, ns, nc, pb, ps, pc;
ll r;

bool good(ll x) {
  ll rb = max(0LL, x * a[0] - nb);
  ll rs = max(0LL, x * a[1] - ns);
  ll rc = max(0LL, x * a[2] - nc);
  ll tc = rb * pb + rs * ps + rc * pc;
  return tc <= r;
}

void solve() {
  cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> r;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'B') a[0]++;
    else if (s[i] == 'S') a[1]++;
    else a[2]++;
  }

  ll l = 0, r = 1e13;
  while (r > l + 1) {
    ll m = l + (r - l) / 2;
    if (good(m)) l = m;
    else r = m;
  }

  cout << l << "\n";  
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
