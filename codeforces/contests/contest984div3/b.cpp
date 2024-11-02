#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;
  unordered_map<long long, vector<long long>> a;

  for (int i = 0; i < k; i++) {
    int b, c;
    cin >> b >> c;
    a[b].push_back(c);
  }

  vector<long long> top_costs;
  for (auto& e : a) {
    auto& c = e.second;
    sort(c.rbegin(), c.rend());
    long long sum = 0;
    for (int i = 0; i < (long long)c.size(); i++) {
      sum += c[i];
    }
    top_costs.push_back(sum);
  }

  sort(top_costs.rbegin(), top_costs.rend());
  long long ans = accumulate(top_costs.begin(), top_costs.begin() + min(n, (long long)top_costs.size()), 0);
  cout << ans << "\n";
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
