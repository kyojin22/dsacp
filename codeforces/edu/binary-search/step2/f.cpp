#include <bits/stdc++.h>
using namespace std;
  
string t, p;
int n; // t length
vector<int> a;

bool good(int x) {
  vector<int> r(n, 0);

  for (int i = 0; i < x; i++) r[a[i]] = 1;

  string np;
  for (int i = 0; i < n; i++) {
    if (!r[i]) np += t[i];
  }

  int j = 0;
  for (int i = 0; i < np.length() && j < p.length(); i++) {
    if (np[i] == p[j]) {
      j++;
    }
  }

  return j == p.length();
}

void solve() {
  cin >> t >> p;
  n = t.length();
  a.resize(n);
  for (int i = 0; i < n; i++) { 
    cin >> a[i];
    a[i]--;
  }

  int l = 0, r = n;
  while (r > l + 1) {
    int m = l + (r - l) / 2;
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
