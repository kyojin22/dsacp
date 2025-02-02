#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

const long long MOD = 1e9 + 7;

void solve() {
  int n;
  cin >> n;

  int a, b;
  unordered_set<int> aset;
  unordered_set<int> bset;

  
  for (int i = 0; i < n; i++) {
    int anum;
    cin >> anum;
    aset.insert(anum);
  }
  
  for (int i = 0; i < n; i++) {
    int bnum;
    cin >> bnum;
    bset.insert(bnum);
  }

  if (aset.size() >= 2 && bset.size() >= 2) cout << "YES\n";
  else if ((aset.size() >= 3 && bset.size() == 1) || (aset.size() == 1 && bset.size() >= 3))  cout << "YES\n";
  else cout << "NO\n";
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
