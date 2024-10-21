#include <bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b) {
  return (a / gcd(a, b)) * b;
}

long long count_divisible(long long x, long long a, long long b, long long c) {
  long long ab = lcm(a, b);
  long long ac = lcm(a, c);
  long long bc = lcm(b, c);
  long long abc = lcm(ab, c);

  return (x / ab) + (x / ac) + (x / bc) - 3 * (x / abc);
}

void solve() {
  long long a, b, c;
  cin >> a >> b >> c;

  long long n;
  cin >> n;

  long long left = 1, right = 1e18, result = -1;

  while (left <= right) {
    long long mid = left + (right - left) / 2;
    if (count_divisible(mid, a, b, c) >= n) {
      result = mid;
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }

  cout << result << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();

  return 0;
}
