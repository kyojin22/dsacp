#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> g;

void solve() {
  cin >> n >> m;

  g.resize(n + 1);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  queue<int> q;
  map<int, int> table;
  q.push(1);
  int d = 0;
  vector<int> route;

  while (!q.empty()) {
    int node = q.front();
    q.pop();

    for (int v : g[node]) {
      if (v == n) {
        cout << d << "\n";
        table[v] = node;
        int start = n;

        route.push_back(n);
        while (table[start] != 1) {
          route.push_back(table[start]);
          start = table[start];
        }

        cout << 1 << " ";

        reverse(route.begin(), route.end());

        for (int i = 0; i < route.size(); i++) {
          cout << route[i] << " ";
        }
      
        return;
      }

      table[v] = node;
      q.push(v);
    }
    d++;
  }

  cout << "IMPOSSIBLE" << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
