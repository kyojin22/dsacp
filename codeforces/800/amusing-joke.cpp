#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

void solve() {
  string str1, str2, str3;
  cin >> str1 >> str2 >> str3;

  unordered_map<char, int> m;

  for (char ch : str1) {
    m[ch]++;
  }

  for (char ch : str2) {
    m[ch]++;
  }

  for (char ch : str3) {
    m[ch]--;
  }

  for (auto chars : m) {
    if (chars.second != 0) {
      cout << "NO\n";
      return;
    } 
  }

  cout << "YES\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();
  
  return 0;
}
