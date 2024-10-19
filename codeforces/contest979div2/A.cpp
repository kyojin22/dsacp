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
  sort(a.begin(), a.end());
  int minimum=a[0];
  int maximum = a[a.size() -1];
  int score = 0;
  for (int i = 0; i < a.size() -1; i++) {
    score += maximum -minimum;
  }
  
  cout << score << "\n";
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
