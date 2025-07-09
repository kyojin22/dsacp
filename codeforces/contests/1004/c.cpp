#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

const long long MOD = 1e9 + 7;

bool containsSeven(ll number) {
  string numStr = to_string(number);
  return numStr.find('7') != string::npos;
}

void solve() {
  ll n;
  cin >> n;

  int i = 0;
  while (!containsSeven(n)) {
    n += 9;
    i++;
  }

  cout << i << "\n";
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
