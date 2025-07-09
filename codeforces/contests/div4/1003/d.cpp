#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calculate_score(vector<ll>& arr) {
    ll n = arr.size();
    ll score = 0;
    ll prefix_sum = 0;
    
    for (int i = 0; i < n; i++) {
        prefix_sum += arr[i];
        score += prefix_sum;
    }
    return score;
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<ll>> a(n, vector<ll>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    vector<int> perm(n);
    for (int i = 0; i < n; i++) {
        perm[i] = i;
    }
    
    ll max_score = 0;
    
    do {
        vector<ll> concatenated;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                concatenated.push_back(a[perm[i]][j]);
            }
        }
        
        ll current_score = calculate_score(concatenated);
        max_score = max(max_score, current_score);
        
    } while (next_permutation(perm.begin(), perm.end()));
    
    cout << max_score << "\n";
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
