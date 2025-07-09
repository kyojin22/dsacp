#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

const long long MOD = 1e9 + 7;

void solve() {
  int n;
  string s;
  cin >> n >> s;

  int dashes = 0;
  int underscores = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == '-') dashes++;
    else underscores++;
  }

  ll result = (ll)(dashes / 2) * (ll)underscores * (ll)(dashes - dashes / 2);
  cout << result << "\n";
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
