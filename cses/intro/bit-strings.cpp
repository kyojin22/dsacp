#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long modpow(long long x, long long n, long long m) {
  if (n == 0) return 1 % m;
  long long u = modpow(x, n / 2, m);
  u = (u * u) % m;
  if (n % 2 == 1) u = (u * x) % m;
  return u;
}

void solve() {
  long long n;
  cin >> n;
  long long ans = modpow(2, n, MOD);
  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
