#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void solve() {
  int n, k;
  cin >> n >> k;

  vi a(n);
  vi b(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int j = 0; j < n; j++) {
    cin >> b[j];
  }

  sort(a.begin(), a.end());
  sort(b.rbegin(), b.rend());

  for (int i = 0; i < k; i++) {
    if (b[i] > a[i]) swap(a[i], b[i]);
    else break;
  }

  cout << accumulate(a.begin(), a.end(), 0) << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  
  return 0;
}
