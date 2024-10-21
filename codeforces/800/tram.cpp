#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int curr = 0, m = 0;

  while (n--) {
    int a, b;
    cin >> a >> b;

    curr += b - a;
    m = max(m, curr);  
  }

  cout << m << "\n";

  return 0;
}
