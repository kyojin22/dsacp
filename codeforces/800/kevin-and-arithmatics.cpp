#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int evens = 0, odds = 0;

  while (n--) {
    int a;
    cin >> a;

    if (a % 2 == 0) evens++;
    else odds++;
  }

  if (evens) {
    cout << odds + 1 << "\n";
  } else {
    cout << odds - 1 << "\n";
  }

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
