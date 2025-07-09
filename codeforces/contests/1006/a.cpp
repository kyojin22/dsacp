#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

const long long MOD = 1e9 + 7;

void solve() {
  int n, k, p;
  cin >> n >> k >> p;

  int min_sum = n * (-p);
  int max_sum = n * p;
  if (k >= min_sum && k <= max_sum) {
    int opers = (abs(k) + p - 1) / p;
    cout << min(opers, n) << "\n";
  } else {
    cout << "-1\n";
  }
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
