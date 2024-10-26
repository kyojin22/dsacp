#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> towers;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    auto it = upper_bound(towers.begin(), towers.end(), num);

    if (it != towers.end()) {
      *it = num;
    } else {
      towers.push_back(num);
    }
  }

  cout << towers.size() << "\n";

  return 0;
}
