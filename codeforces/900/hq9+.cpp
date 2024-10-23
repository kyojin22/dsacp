#include <bits/stdc++.h>
using namespace std;

void solve() {
  string str;
  cin >> str;

  for (char ch : str) {
    if (ch == 'H' || ch == 'Q' || ch == '9') {
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
