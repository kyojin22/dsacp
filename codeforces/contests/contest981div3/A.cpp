#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

void solve(int n) {
  int output = 0; 
  int i = 1;
  
  while (n >= abs(output)) {
    if (i % 2 == 0) output += (2*i-1);
    else output -= (2*i)-1;
    i++;
  }

  if (output >= 0) cout << "Kosuke\n";
  else cout << "Sakurako\n"; 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    solve(n);
  }
  
  return 0;
}
