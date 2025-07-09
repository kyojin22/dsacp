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

  int moves = 0;
  bool isZero = true;

  string s;
  cin >> s;

  for (int i = 0; i < n; ++i) {
    char ch = s[i];
    
    if (ch == '1') {
      if (isZero) {
        moves++;
        isZero = false;        
      }
    } else {
      if (!isZero) {
        isZero = true;
        moves++;
      }
    }
  }

  cout << moves << "\n";
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
