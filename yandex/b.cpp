#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> input) {
  int r = input.size();
  stringstream ss(input[0]);
  vector<string> v;
  string s;
  while (getline(ss, s, ' ')) v.push_back(s);
  cout << r << " " << v.size() << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  vector<string> input;
  string l;
  while (getline(cin, l)) {
    if (l.empty()) break;
    input.push_back(l);
  }

  if (!input.empty()) solve(input);
  
  return 0;
}
