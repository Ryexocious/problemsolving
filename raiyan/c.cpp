#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> moves;

    // Read the column inscription counts
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Queue to keep track of positions with 1's and 2's
    queue<int> ones, twos;

    // Fill the queues with indices of 1's and 2's
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            ones.push(i);
        } else if (a[i] == 2) {
            twos.push(i);
        }
    }

    // Perform moves to balance the columns
    while (!twos.empty() && !ones.empty()) {
        int one = ones.front();
        int two = twos.front();

        // Record the move (convert 0-based to 1-based indexing)
        moves.push_back({two + 1, one + 1});

        // Perform the move: move one inscription from 2-column to 1-column
        a[one]++;
        a[two]--;

        // If a column with 2 now has 1, move it to ones
        if (a[two] == 1) {
            twos.pop();
            ones.push(two);
        } else {
            twos.pop();
        }

        // If a column with 1 now has 2, move it to twos
        if (a[one] == 2) {
            ones.pop();
            twos.push(one);
        } else {
            ones.pop();
        }
    }

    // Output the results
    cout << moves.size() << "\n";
    for (auto& move : moves) {
        cout << move.first << " " << move.second << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}








