#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

void solve() {
  int n;
  cin >> n;

  vi a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int k;
  cin >> k;

  vi ans(k);

  for (int j = 0; j < k; ++j) {
    int l, r;
    cin >> l >> r;

    int t = 0;

    for (int item : a) {
      if (item >= l && item <= r) t++;
    }

    ans[j] = t;
  }

  for (auto aa : ans) {
    cout << aa << " ";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  
  return 0;
}
