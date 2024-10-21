#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int oddx = 0, oddy = 0;
  bool s = false;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;

    if (x % 2 != 0) oddx++;
    if (y % 2 != 0) oddy++;

    if ((x % 2 != y % 2)) s = true;
  }

  if (oddx % 2 == 0 && oddy % 2 == 0) cout << "0\n";
  else if (oddx % 2 == 1 && oddy % 2 == 1 && s) cout << "1\n";
  else cout << "-1\n";

  return 0;
}
