#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> a(n), b(m);
    unordered_map<int, int> pos;

    // Read the initial lineup of members
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i;  // Store the position of each member in the array
    }

    // Read the order of members who should present the slides
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Track the maximum position where we have found the required presenters so far
    int max_pos = -1;
    bool good = true;

    // Process each slide in array b
    for (int i = 0; i < m; i++) {
        int presenter = b[i];
        int current_pos = pos[presenter];  // Find where this presenter is in array a

        // If the current presenter is located before the maximum seen position, it means
        // they can't be moved to the front anymore, so it's not possible to reorder correctly.
        if (current_pos < max_pos) {
            good = false;
            break;
        }

        // Update the maximum position
        max_pos = max(max_pos, current_pos);
    }

    // Output the result for this test case
    if (good) {
        cout << "YA" << endl;
    } else {
        cout << "TIDAK" << endl;
    }
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
