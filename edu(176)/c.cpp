#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    // Sort the array to make it easier to handle
    sort(a.begin(), a.end());

    // Precompute prefix sums
    vector<int> prefix(m + 1, 0);
    for (int i = 0; i < m; i++) {
        prefix[i + 1] = prefix[i] + (a[i] >= 1);
    }

    ll total = 0;
    for (int i = 0; i < m; i++) {
        int c1 = a[i];
        if (c1 < 1) continue;

        // Find the maximum k for c1: k <= c1 and n - k <= a[j] for some j
        int low = max(1, n - a[m - 1]);
        int high = min(c1, n - 1);

        if (low > high) continue;

        // Count the number of colors j that satisfy n - k <= a[j]
        // For each k in [low, high], count the number of j where a[j] >= n - k
        // Since a is sorted, we can use binary search
        int valid_k = high - low + 1;
        int min_a_j = n - high; // Minimum a[j] required for the smallest k
        int max_a_j = n - low;  // Maximum a[j] required for the largest k

        // Find the number of j where a[j] >= min_a_j
        int cnt = m - (lower_bound(a.begin(), a.end(), min_a_j) - a.begin());

        total += valid_k * cnt;
    }

    cout << total << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}