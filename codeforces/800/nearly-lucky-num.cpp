#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  string n_str;
  cin >> n_str;

  int lucky = 0;

  for (char ch : n_str) {
    if (ch == '4' || ch == '7') lucky++;
  }

  if (lucky == 4 || lucky == 7) cout << "YES\n";
  else cout << "NO\n";
  
  return 0;
}
