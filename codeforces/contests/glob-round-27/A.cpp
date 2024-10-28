#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, m;
  int r, c;
  cin >> n >> m >> r >> c;

  long long p = (r-1)*m+c;
  long long d = n*m-p - (n-r) + (m)*(n-r);

  cout << d << "\n"; 
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
