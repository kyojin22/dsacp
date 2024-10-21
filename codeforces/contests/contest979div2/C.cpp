#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

void solve() {
  ll n;
  cin >> n;
  
  string s;
  cin >> s;

  s = '1' + s + '1';

  if (s.find("11") != -1) cout << "YES\n";
  else cout << "NO\n"; 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  
  return 0;
}
