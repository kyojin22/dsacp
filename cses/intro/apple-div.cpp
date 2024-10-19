#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define PB push_back

void solve() {
  int n;
  cin >> n;

  vll nums;

  while (n--) {
    ll num;
    cin >> num;
    nums.PB(num);
  }

  ll sum = accumulate(nums.begin(), nums.end(), 0);
  sort(nums.rbegin(), nums.rend());

  ll t = sum / 2;
  vll s1, s2;
  ll ss1 = 0, ss2 = 0;

  for (ll nn : nums) {
    if (ss1 < ss2) {
      s1.PB(nn);
      ss1 += nn;
    } else {
      s2.PB(nn);
      ss2 += nn;
    }
  }

  cout << abs(ss1 - ss2) << "\n";

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  
  return 0;
}
