#include <bits/stdc++.h>
using namespace std;

int n, m;
int c = 0;
vector<vector<int>> g(n);
vector<int> visited;

void dfs(int node) {
    visited[node] = true;
    for (int nn : g[node]) {
      if (!visited[nn]) {
        dfs(nn);
      }
    } 
  }

void solve() {
  cin >> n >> m;
  
  g.resize(n);
  visited.resize(n, false);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a - 1].push_back(b - 1);
    g[b - 1].push_back(a - 1);
  }

  vector<int> e;

  for (int i = 0; i < visited.size(); i++) {
    if (!visited[i]) {
      e.push_back(i);
      c++;
      dfs(i);
    }
  }

  cout << c - 1 << "\n";

  for (int i = 0; i < e.size() - 1; i++) {
    cout << e[i] + 1<< " " << e[i + 1] + 1 << "\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
