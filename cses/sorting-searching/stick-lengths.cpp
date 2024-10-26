#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int mi = a.size() / 2;
  ll c = 0;

  for (int j = 0; j < n; j++) {
    c += abs(a[mi] - a[j]);
  }

  cout << c << "\n";

  return 0;
}
