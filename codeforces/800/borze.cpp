#include <bits/stdc++.h>
using namespace std;

#define PB push_back

void solve() {
  string str;
  cin >> str;

  string ans = "";

  for (int i = 0; i < str.length(); i++) {
    if (str[i] ==  '.') ans.PB('0');
    else if (str[i] == '-') {
      if (str[i + 1] == '.') {ans.PB('1'); i++;}
      else if (str[i + 1] == '-') {ans.PB('2'); i++;}
    }
  }

  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
