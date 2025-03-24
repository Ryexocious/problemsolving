#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

// Segment Tree class to handle the range maximum queries and updates
class SegmentTree {
public:
    vector<int> tree, lazy;
    int n;

    SegmentTree(int n) {
        this->n = n;
        tree.resize(4 * n, 0);
        lazy.resize(4 * n, 0);
    }

    void push(int node, int start, int end) {
        if (lazy[node] != 0) {
            tree[node] = lazy[node];
            if (start != end) {
                lazy[2 * node] = lazy[node];
                lazy[2 * node + 1] = lazy[node];
            }
            lazy[node] = 0;
        }
    }

    void update(int node, int start, int end, int l, int r, int value) {
        push(node, start, end);
        if (r < start || end < l) {
            return;
        }
        if (l <= start && end <= r) {
            lazy[node] = value;
            push(node, start, end);
            return;
        }
        int mid = (start + end) / 2;
        update(2 * node, start, mid, l, r, value);
        update(2 * node + 1, mid + 1, end, l, r, value);
        tree[node] = max(tree[2 * node], tree[2 * node + 1]);
    }

    int query(int node, int start, int end, int l, int r) {
        push(node, start, end);
        if (r < start || end < l) {
            return 0;
        }
        if (l <= start && end <= r) {
            return tree[node];
        }
        int mid = (start + end) / 2;
        int leftQuery = query(2 * node, start, mid, l, r);
        int rightQuery = query(2 * node + 1, mid + 1, end, l, r);
        return max(leftQuery, rightQuery);
    }
};

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Create a segment tree initialized with the penalties
    SegmentTree st(n);

    // Fill the segment tree with initial penalties
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            st.update(1, 0, n - 1, i, i, 0);  // Blue cell, no penalty
        } else {
            st.update(1, 0, n - 1, i, i, a[i]);  // Red cell, penalty exists
        }
    }

    // Perform at most k operations
    int result = 0;
    while (k > 0) {
        int maxPenalty = st.query(1, 0, n - 1, 0, n - 1);
        if (maxPenalty == 0) break;  // If no more penalties, we're done.

        // Find the segment with the max penalty and perform the operation
        for (int i = 0; i < n; i++) {
            if ((s[i] == 'B' && a[i] > 0) || (s[i] == 'R' && a[i] > 0)) {
                // If the cell is in the wrong color, perform an operation here
                st.update(1, 0, n - 1, i, i, 0);  // Mark this as correctly painted
                break;
            }
        }

        // After each operation, reduce k and calculate the new result
        k--;
    }

    // Calculate final penalty (the maximum remaining penalty)
    result = st.query(1, 0, n - 1, 0, n - 1);
    cout << result << endl;
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
