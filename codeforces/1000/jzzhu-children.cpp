#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef queue<pii> qpii;

void solve() {
  int n, m;
  cin >> n >> m;

  qpii a;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    a.push({i + 1, num});
  }

  int l = -1;

  while (!a.empty()) {
    int idx = a.front().first;
    int c = a.front().second;
    a.pop();

    c -= m;

    if (c > 0) a.push({idx, c});
    else l = idx;
  }
  
  cout << l << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
