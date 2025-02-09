#include <bits/stdc++.h>
using namespace std;

void solve() {
  string str;
  cin >> str;

  string ans = "";
  for (int i = 0; i < str.size() - 2; i++) {
    ans += str[i];
  }
  ans += 'i';
  
  cout << ans << "\n";
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
