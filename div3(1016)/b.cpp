#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
    string n;
    cin >> n;

    int len = n.size();
    int min_removed_digits = len;  // Worst case, remove all but 1 digit

    // Try to keep each possible subsequence of digits that might minimize cost
    for (int i = 0; i < len; ++i) {
        string remaining_number = n.substr(i);
        int sum_of_digits = 0;
        for (char c : remaining_number) {
            sum_of_digits += c - '0';
        }

        if (sum_of_digits == 0) continue;  // Skip if sum of digits is zero

        // Compute cost for this subsequence
        long long num_value = stoll(remaining_number);
        long long cost = num_value * 1.0 / sum_of_digits;

        // Check the minimum number of digits to remove for minimum cost
        if (cost < (stoll(n) / accumulate(n.begin(), n.end(), 0))) {
            min_removed_digits = min(min_removed_digits, len - remaining_number.size());
        }
    }

    cout << min_removed_digits << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
