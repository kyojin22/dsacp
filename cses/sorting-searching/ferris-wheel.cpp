#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void solve() {
  int n, x;
  cin >> n >> x;

  vi a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a.begin(), a.end());

  int l = 0;
  int r = a.size() - 1;
  int w = 0;

  while (r >= l) {
    if (a[l] + a[r] <= x) l++;
    r--;
    w++;
  } 

  cout << w << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
