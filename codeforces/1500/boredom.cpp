#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  int maxNum;
  map<int, long long> freq;
  for (int i = 0; i < n; ++i)
  {
    int num;
    cin >> num;
    freq[num]++;
    maxNum = max(maxNum, num);
  }

  vector<long long> dp(maxNum + 1, 0);
  dp[0] = 0;
  dp[1] = freq[1];
  for (int i = 2; i <= maxNum; i++)
  {
    dp[i] = max(dp[i - 1], i * freq[i] + dp[i - 2]);
  }

  cout << dp[maxNum] << "\n";
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  solve();

  return 0;
}
