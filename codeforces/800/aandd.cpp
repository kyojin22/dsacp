#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  
  int n;
  string str;
  cin >> n >> str;

  int a = 0, d = 0;

  for (char ch : str) {
    if (ch == 'A') a++;
    else d++;
  }
  
  if (a == d) cout << "Friendship\n";
  else if (a > d) cout << "Anton\n";
  else cout << "Danik\n"; 

  return 0;
}
