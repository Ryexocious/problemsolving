#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // If there is only one row, count the frequency of each color
    if (n == 1) {
        map<int, int> colorCount;
        for (int j = 0; j < m; j++) {
            colorCount[grid[0][j]]++;
        }
        int maxColor = 0;
        for (auto& [color, count] : colorCount) {
            maxColor = max(maxColor, count);
        }
        cout << m - maxColor << endl;
        return;
    }

    // Create two maps to count the frequency of colors in the two groups
    map<int, int> group1, group2;

    // Fill the two groups based on the checkerboard pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
                group1[grid[i][j]]++;
            } else {
                group2[grid[i][j]]++;
            }
        }
    }

    // Total cells in each group
    int total1 = (n * m + 1) / 2;
    int total2 = (n * m) / 2;

    // Find the most frequent color in each group
    int maxGroup1 = 0, maxGroup2 = 0;
    for (auto& [color, count] : group1) {
        maxGroup1 = max(maxGroup1, count);
    }
    for (auto& [color, count] : group2) {
        maxGroup2 = max(maxGroup2, count);
    }

    // The minimum steps needed to paint the entire grid
    cout << (total1 - maxGroup1) + (total2 - maxGroup2) << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
