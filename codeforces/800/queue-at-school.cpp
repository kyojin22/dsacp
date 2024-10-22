#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, t;
  string str;

  cin >> n >> t >> str;

  while (t--) {
    for (int i = 0; i < n - 1; i++) {
      if (str[i] == 'B' && str[i + 1] == 'G') {
        swap(str[i], str[i + 1]);
        i++;
      }
    }
  }

  cout << str << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
