#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

const long long MOD = 1e9 + 7;

void solve() {
  ll n, k;
  cin >> n >> k;

  if (n == 1) {
    cout << k << "\n";
    return;
  }

  cout << k;
  while (n > 2) {
    cout << " 0";
    n--;
  }
  cout << " " << k << "\n";
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
