#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<long long> A(n);
  vector<long long> B(m);
  
  for (int i = 0; i < n; ++i) cin >> A[i];
  for (int i = 0; i < m; ++i) cin >> B[i];
  
  long long previous = LLONG_MIN;

  for (auto& a : A) {
    long long diff = B[0] - a;

    if (a < previous) {
      a = diff;
    } else if (diff < a && diff >= previous) {
      a = diff;
    }

    if (a < previous) {
      cout << "NO\n";
      return; 
    }

    previous = a;
  }

  cout << "YES\n";
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
