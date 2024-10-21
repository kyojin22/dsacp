#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

void solve() {
  ll n;
  cin >> n;

  vll nums(n);

  for (ll i = 0; i < n; ++i) {
    cin >> nums[i];
  }

  int r = 0;
  int l = 1; 

  while (l <= n) {
    r++;
    for (ll j = 0; j < n; ++j) {
      if (nums[j] > l) l++;
    }
  }

  cout << r << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
