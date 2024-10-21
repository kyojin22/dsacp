#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  string str1, str2;
  cin >> str1 >> str2;

  reverse(str1.begin(), str1.end());

  if (str1 == str2) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}
