#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

const long long MOD = 1e9 + 7;

void solve() {
  ll n;
  cin >> n;
  
  ll full = n / 15;
  
  ll c = full * 3;
  
  ll r = n % 15;
  
  if (r >= 0) c += min(r + 1, 3LL);
  
  cout << c << "\n";
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
