#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  string str;
  cin >> str;

  int up = 0, low = 0;

  for (char ch : str) {
    if (isupper(ch)) up++;
    else low++;
  } 

  if (up > low) transform(str.begin(), str.end(), str.begin(), ::toupper);
  else transform(str.begin(), str.end(), str.begin(), ::tolower);

  cout << str << "\n";

  return 0;
}
