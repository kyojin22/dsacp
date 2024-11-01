#include <bits/stdc++.h>
using namespace std;

struct J {
  int a;
  int b;
  long long c;
}

int n, m, d;
vector<J> a;

void solve() {
  cin >> n >> m >> d;
  a.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].a >> a[i].b >> a[i].c;
  }

  
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();

  return 0;
}
