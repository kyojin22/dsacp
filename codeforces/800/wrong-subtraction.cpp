#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  long long n;
  int k;
  cin >> n >> k;

  while (k--) {
    if (n % 10 == 0) n /= 10;
    else n--;
  }

  cout << n << "\n";
  
  return 0;
}
