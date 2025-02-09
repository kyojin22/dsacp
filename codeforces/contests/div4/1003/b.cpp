#include <bits/stdc++.h>
using namespace std;

void solve() {
  string str;
  cin >> str;

  int pairs = 0;
  for (int i = 0; i < str.size() - 1; i++) {
    if (str[i] == str[i + 1]) {
      pairs++;
    }
  }

  if (pairs >= 1) {
    cout << 1 << "\n";
  } else {
    cout << str.size() << "\n";
  }
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
