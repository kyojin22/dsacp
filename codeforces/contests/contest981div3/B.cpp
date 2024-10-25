#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> ans;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        int operations = 0;

        for (int start = 0; start < n; start++) {
            int min_val = INT_MAX;
            for (int i = 0, j = start; i < n && j < n; i++, j++) {
                min_val = min(min_val, matrix[i][j]);
            }
            if (min_val < 0) {
                operations += abs(min_val);
                for (int i = 0, j = start; i < n && j < n; i++, j++) {
                    matrix[i][j] += abs(min_val);
                }
            }
        }

        for (int start = 1; start < n; start++) {
            int min_val = INT_MAX;
            for (int i = start, j = 0; i < n && j < n; i++, j++) {
                min_val = min(min_val, matrix[i][j]);
            }
            if (min_val < 0) {
                operations += abs(min_val);
                for (int i = start, j = 0; i < n && j < n; i++, j++) {
                    matrix[i][j] += abs(min_val);
                }
            }
        }

        ans.push_back(operations);
    }

    for (auto op : ans) {
        cout << op << "\n";
    }

    return 0;
}