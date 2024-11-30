#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<vector<pair<int, long long>>> adj(n);
  vector<long long> distance(n, INF);
  vector<bool> visited(n, false);
  distance[0] = 0;

  for (int i = 0; i < m; i++) {
    int a, b;
    long long c;
    cin >> a >> b >> c;
    adj[a - 1].emplace_back(b - 1, c);
  }

  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
  q.push({0, 0});

  while (!q.empty()) {
    int a = q.top().second; q.pop();
    if (visited[a]) continue;
    visited[a] = true;

    for (auto u : adj[a]) {
      int b = u.first; 
      long long w = u.second;
      if (distance[a] + w < distance[b]) {
        distance[b] = distance[a] + w;
        q.push({distance[b], b});
      }
    }
  }

  for (long long d : distance) {
    cout << d << " ";
  }

  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
