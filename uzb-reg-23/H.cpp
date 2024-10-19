#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

void solve() {
  ll N;
  cin >> N;

  vll cs = {1, 2};

  while (1) {
    ll nc = cs.back() + cs[cs.size() - 2];
    if (nc > N) break;
    cs.PB(nc); 
  }

  ll d = 0;
  ll r = N;

  for (int i = cs.size() - 1; i >= 0; i--) {
    if (cs[i] <= r) {
      r -= cs[i];
      d++;
    }
  }

  cout << d << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
