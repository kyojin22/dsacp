#include <bits/stdc++.h>
using namespace std;

// Number Theory functions from Competitive Programmer's Handbook

bool prime(int n) {
  if (n < 2) return false;
  for (int x = 2; x * x <= n; x++) {
    if (n % x == 0) return false;
  }
  return true;
}

vector<int> factors(int n) {
  vector<int> f;

  for (int x = 2; x * x <= n; x++) {
    while (n % x == 0) {
      f.push_back(x);
      n /= x;
    }
  }

  if (n > 1) f.push_back(n);

  return f;
}

vector<int> divisors(int n) {
  vector<int> f;
  f.push_back(1);

  for (int x = 2; x * x <= n; x++) {
    if (n % x == 0) {
      f.push_back(x);
      if (x != n / x) {
        f.push_back(n / x);
      }
    }
  }

  if (n > 1) f.push_back(n);
  sort(f.begin(), f.end());
  return f;
}

vector<int> sieve(int n) {
  bool prime[n + 1];
  memset(prime, true, sizeof(prime));

  for (int p = 2; p * p <= n; p++) {
    if (prime[p]) {
      for (int i = p * p; i <= n; i += p) {
        prime[i] = false;
      }
    }
  }

  vector<int> primes;
  for (int p = 2; p <= n; p++) {
    if (prime[p]) {
      primes.push_back(p);
    }
  }

  return primes;
}

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return (a * b) / gcd(a, b); 
}

// (x ^ n) % m
int modpow(int x, int n, int m) {
  if (n == 0) return 1 % m;
  long long u = modpow(x, n / 2, m);
  u = (u * u) % m;
  if (n % 2 == 1) u = (u * x) % m;
  return u;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int x, n, m;
  cin >> x >> n >> m;
  cout << modpow(x, n, m) << "\n";

  return 0;
}
