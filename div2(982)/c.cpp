#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n + 1); // 1-indexed array
    for (int i = 1; i <= n; i++) cin >> v[i];

    ll current_length = n; // Current length of the array
    ll total_length = n;   // Total length after all operations

    while (true) {
        bool found = false; // To check if we can make any operations
        ll max_append = 0; // Maximum number of zeros we can append in this round

        // Check for valid indices in a single pass
        for (int i = n; i > 1; i--) {
            // Check if the current value satisfies the condition
            if (v[i] == current_length + 1 - i) {
                found = true; // Valid index found
                max_append = max(max_append, (ll)i - 1); // Track maximum zeros to append
            }
        }

        // If we found valid positions, update the lengths
        if (found) {
            current_length += max_append; // Update the current length
            total_length += max_append; // Update the total length
        } else {
            break; // Exit if no valid positions were found
        }
    }

    cout << total_length << "\n"; // Output the maximum possible length
}

int main() {
    fast;
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        solve(); // Solve each test case
    }
    return 0;
}





