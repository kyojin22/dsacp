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

  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  long long sum = 0;
  bool startedWithNegative = (a[0] < 0);

  for (int i = 0; i < n; ++i) {
    long long num = a[i];

    if (num < 0 && !startedWithNegative) {
      sum += abs(num);
    } else if (num > 0) {
      sum += num;
    }
  }

  cout << sum << "\n";
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
