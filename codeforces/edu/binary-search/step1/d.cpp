#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void solve() {
  int n;
  cin >> n;

  vi a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int k;
  cin >> k;

  while (k--) {
    int l, r;
    cin >> l >> r;

    int left = lower_bound(a.begin(), a.end(), l) - a.begin();
    int right = upper_bound(a.begin(), a.end(), r) - a.begin() - 1;

    if (right < left) cout << 0 << " ";
    else cout << right - left + 1 << " "; 
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
